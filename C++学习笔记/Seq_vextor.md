### 顺序容器概述
* vector      可变大小数组，支持快速随机访问,在尾部之外的位置插入或删除元素可能很慢.
* deque       双端队列. 支持快速随机访问, 在头尾位置插入/删除速度很快.
* list       双向链表, 支持双向顺序访问,在list的任何位置插入或删除都很快.
* forward_list    单向链表,只支持单向顺序访问,在链表的任何位置进行插入/删除操作速度很快.
* array          固定大小的数组,支持快速随机访问, 不能添加或删除元素.
* string    与vextor相似的容器,但专门用于保存字符,随机访问快，在尾部插入/删除速度快.  
forward_list迭代器不支持递减运算符(--).c.size()方法返回c中的元素数目.  
构成迭代器范围的迭代器的限制:   
* 它们指向同一个容器中的元素,或者是容器最后一个元素之后的位置.
* end可以与begin指向相同的位置，但不能指向begin之前的位置. 
```
list<int> a;
a.begin();   //空的list返回的迭代器和有元素的返回的迭代器不同.
```
list迭代器不支持关系运算符.  
explicit关键字只能用于类内部的构造函数申明上.  
explicit关键字只能作用于单个参数的构造函数.  
explicit关键字用来修饰类的构造函数，被修饰的构造函数的类，不能发生相应的隐式转换.  
array容器不适用于C c(b,e)；b和e都是迭代器类型.　　
### 将一个容器初始化为另一个容器的拷贝  
1.可以直接拷贝整个容器,或者（array除外）拷贝由一个迭代器对指定的元素范围. 
2.为了创建一个容器为另一个容器的拷贝,两个容器的类型及其元素的类型必须匹配，当传递迭代器参数来拷贝一个范围时，就不要求容器类型是相同的了，而且，元素类型也可以不同，只要能够转换就可以.  
``` 
vector<const char*> articles={"a","an","the"};
//可以将const char *元素类型转换为string．
forward_list<string> words(article.begin(),article.end());
```
只有顺序容器的构造函数才接受大小参数，关联容器并不支持.  
赋值相关的运算会导致指向左边容器内部的迭代器，引用和指针失效,而swap操作将容器的内容交换不会导致指向容器的迭代器，引用，指针失效.  
assign操作不适用于关联容器和array．　　
seq.assign(b,e)    将seq中的元素替换为b和e所表示的范围中的元素，迭代器b和e不能指向seq中的元素.  
seq.assign(il)     将seq中的元素替换为初始值列表il中的元素.  
seq.assign(n,t)   将seq中的元素替换为n个值为t的元素.  
swap交换两个容器的内容会很快，因为元素本身并未交换,swap只是交换了两个容器的内部数据结构.  
除array外,swap不对任何元素进行拷贝,删除或插入操作,因此可以保证在常数时间内完成.   
**对一个string调用swap会导致迭代器,引用和指针失效.**   
forward_list不支持push_back和emplace_back.  
vector和string 不支持push_front,emplace_front.  
向一个vector，string或者deque插入元素会使所有指向容器的迭代器引用和指针失效.  
向一个vector或者string添加元素可能引起整个对象存储空间的重新分配,重新分配一个对象的存储空间需要分配新的内存，并将元素从旧的空间移动到新的空间中去.  
string是一个字符容器,我们可以使用push_back在string末尾添加字符.  　　
当调用push或者insert成员函数时，我们将元素类型的对象传递给它们，这些对象被拷贝到容器中,而当我们调用一个emplace时，而是将参数传递给元素类型的构造函数，emplace成员使用这些参数在容器管理的内存空间中直接构造元素,
#### 访问元素  
包括array在内的每个顺序容器都有一个front成员函数，而除了forward_list之外的所有顺序容器都有一个back成员函数.这两个操作分别返回首元素和尾元素的拷贝.  
```
auto last=c.end();
auto v=*(--last);   //不能递减forward_list的迭代器.   
auto vv=c.back();   //forward_list不支持.  
```   
at和下标操作只适用于string,vector,deque,array.
back不适用于forward_list.  
访问成员函数返回的是引用　　　
在容器中访问元素的成员函数(front,back,下标和at)返回的都是引用.
auto 需要显示的定义引用类型.  
### 删除元素  
forward_list有特殊版本的erase.  
forward_list不支持pop_back；  
vector和string不支持pop_front.  
clear()删除所有元素.　　
删除deque中除首尾位置之外的任何元素都会使所有的迭代器，引用，指针失效.   
指向vector或string中删除点之后位置的迭代器，引用和指针都会失效.  
如何用数组的值拷贝给容器?
```
 int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    list<int> a;
    vector<int> b;
    a.assign(begin(ia),end(ia));
    b.assign(begin(ia),end(ia));
```
　











