## IO类
>iostream头文件中定义了用于读写流的基本类型.  
>fstream中定义了读写命名文件的类型.   
>sstream中定义了读写内存string对象的类型.  
### IO对象无拷贝或赋值  
```
ofstream out1,out2;
out1 = out2;    //错误，不能对流对象赋值
ofstream print(ofstream);   //错误，不能初始化ofstream;
out2 = print(out2);     //错误，不能拷贝流对象  
```
进行IO操作的函数通常以引用方式传递和返回流，读写一个IO对象会改变其状态,因此传递和返回引用不能是const.  
确定一个流对象的状态的最简单的方法是把它当做一个条件来使用.  
>int val;  
>while(cin >> val)  
 使用good或者fail是确定流的总体状态的正确方法,实际上,我们将流当做判断条件就相当于while(!fail()).  
 ### 管理条件状态  
 流对象的rdstate成员返回一个iostate值,对应流的当前状态,setstate操作将给定条件位置位 ,表示发生了对应的错误,clear()不接受参数的的版本清除所有错误标志位,执行clear()后，调用good()返回true，带参数的clear版本接受一个iostate值,表示流的新状态,为了复位单一的条件状态位,我们首先用rdstate读出当前条件状态,然后用位操作将所需位复位来生成新的状态.  
 cin.clear(cin.rdstate() &~ cin.failbit&~cin.badbit);  //复位failbit和badbit复位,保持其他状态位不变.    
 ### 管理缓冲区  
 每个输出流都管理一个缓冲区,用来保存程序读写的数据. 执行os << "input:";文本串可能立即打印出来,但是也有可能被操作系统保存在缓冲区中,随后再打印,有了缓冲机制,操作系统就可以将程序的多个输出组合成单一的系统级写操作.  
缓冲区刷新的原因:  
* 程序正常结束,作为main()函数的return操作的一部分,缓冲区刷新被执行.  
* 缓冲区满时，需要刷新缓冲区,而后新的数据才能继续写入缓冲区.
* 我们可以使用endl操作符显示的刷新缓冲区。
* 在每个输出操作之后，我们可以使用操作符unitbuf设置流的内部状态,来清空缓冲区，默认情况下，对cerr是设置unnitbuf的，因此写到cerr的内容都是当即刷新的.
* 一个输出流可能被关联到另一个流，在这种情况下,当读写被关联的流时，关联到的流的缓冲区会被刷新.默认情况下,cin和cerr都关联到cout，因此，读cin或写cerr都会导致cout的缓冲区被刷新.  
### 刷新缓冲区  
```
cout << "hi!"<<endl;  //输出hi和一个换行，然后刷新缓冲区.  
cout << "hi!"<<flush;   //输出hi，然后刷新缓冲区  
cout << "hi!" << ends;   //输出hi和一个空字符,刷新缓冲区  
```
### unitbuf  操作符 
如果想在每次输出操作后都刷新缓冲区，我们可以使用unitbuf操作符,它告诉流在接下来的每次写操作后都刷新缓冲区，nounitbuf操作符重置流,使其恢复正常的系统管理的缓冲区刷新机制.  
**如果程序崩溃，缓冲区不会被刷新**    
标准库将cout 和cin关联在一起,所以cin >> val;将导致cout的缓冲区被刷新;  
tie有两个重载版本,一个版本不带参数，返回指向输出流的指针,如果本对象未关联到任何流，返回空指针.  
tie的第二个版本接受一个指向ostream的指针,将自己关联到ostream，即x.tie(&o);将流x 关联到流 o上.  
## 8.2.1 使用文件流对象  
创建文件流对象时，我们可以提供文件名(可选的),如果提供了一个文件名,则open会被自动调用:
    ifstream in(ifile);    //构造一个ifstream并打开给定文件  
    ofstream out;          //输出文件流未关联到任何文件
    out.open(ifile + ".copy");     //打开指定文件
如果调用open失败,failbit会被置位, 因为调用open可能调用失败，进行open是否成功的检测通常是一个好习惯.
对于一个已经打开额文件流调用open函数会失败,并会导致failbit被置位,随后的试图使用文件流的操作都会失败, 为了将文件流关联到另一个文件，必须首先关闭已经关联额文件,一旦文件成功关闭，我们可以打开新的文件:
in.close();     //关闭文件
in.open(ifile + "2");   //打开另一个文件
如果open成功.则open会设置流的状态,使得good()为true.
当一个fstream对象被销毁时，close会自动被调用.
ifstream -- 从已有的文件读
ofstream   -- 打开文件供读写
fstream   -- 打开文件读写
文件打开模式：
ios::in  读
ios::out  写
ios::w:app   从文件末尾开始写
ios::binary   二进制模式
ios::nocreate   打开一个文件时，如果文件不存在，不创建文件
ios::noreplace  打开一个文件时，如果文件不存在，创建该文件
ios::trunc   打开一个文件，然后清空内容
ios::ate  打开一个文件，将位置移动到文件尾.
文件指针在c++中的用法:
ios::beg  文件头
ios::end  文件尾
ios::cur   当前位置 
例子:
```
file.seekg(0,ios::beg);   //让文件指针定位到文件开头
file.seekg(0,ios::end);//让文件指针定位到文件末尾
file.seekg(10,ios::cur); //让文件指针从当前位置向文件末尾方向移动10个字节
file.seekg(-10.ios::cur);  //让文件指针从当前位置向文件开始方向移动10个字节
file.seekg(10,ios::beg);   //让文件指针定位到离文件开头10个字节的位置
``` 
文件模式的限制:
* 只可以对ofstream或者fstream对象设定out模式.
* 只可以ifstream或fstream对象设定为in模式.
* 只有out被设定时，才可以设定为trunc模式.
* trunc没被设置，才能设置app。在app模式下，默认以写的方式打开.
* 以out模式打开的文件也会被清空，所以，要想保留文件中额内容,同时要指定app模式.  或同时指定in 模式.
ifstream默认以in打开，ofstream默认以out打开.
保留ofstream打开的文件中已有数据的唯一方法是显式指定app或in模式
### string流
stringstream特有的操作:
* sstream  strm(s).      strm是一个sstream对象，保存string s的一个拷贝,此构造函数是explicit的.
* strm.str()返回strm中所保存的string的拷贝.
* strm.str(s),将s拷贝到strm中,返回void






















































































