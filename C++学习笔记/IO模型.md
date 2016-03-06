### IO模型　　
使用socket()系统调用能够创建一个socket，它返回一个用来在后续系统调用中引用该socket的文件描述符.  
fd=socket(domain,type,protocol); 
AF表示地址族,PF表示协议族.  
流socket提供了一个可靠的双向的字节流通信信道.  
* 可靠的:表示可以保证发送者传输的数据会完整无缺的到达接受应用程序(假设网络链接和接收都不会崩溃)或收到一个传输失败的通知.   
* 双向的:表示数据可以在两个socket之间的任意方向上传输.   
* 字节流:表示与管道一样不存在消息边界的概念.  
* 数据报socket允许数据以被称为数据报的消息的形式进行交换,在数据报socket中,消息边界得到了保留,但数据传输是不可靠的,消息的到达可能是无序的、重复的或者根本就无法到达.  ### socket系统调用  
* socket()系统调用创建一个新的socket。　　
* bind()系统调用将一个socket绑定到一个地址上, 通常，服务器需要使用这个调用来将其socket绑定到一个众所周知的地址上使得客户端能够定位到该socket上.   
* listen()系统调用允许一个流socket接受来自其他socket的接入连接.   
* accept()系统调用在一个监听流socket上接受来自一个对等应用程序的连接,并可选地返回对等socket地址.  
* connect()系统调用建立与另一个socket之间的联系.    
socket　I/O可以使用传统的read()和write()系统调用或使用一组socket特有的系统调用(如read(),recv(),sendto())以及recvfrom()来完成),在默认情况下,这些系统调用在I/O操作无法被立即完成时会阻塞,通过使用fcntl()F_SETFL操作,来启用O_NONBLOCK打开文件状态标记可以执行非阻塞I/O.  
在Linux上可以通过调用ioctl(fd,FIONREAD,&cnt)来获取文件描述符fd引用的流socket中可用的未读字节数,对于数据报socket来讲,这个操作会返回下一个未读数据报中的字节数(如果下一个数据报的长度为零的话就返回零)或在没有未决数据报的情况下返回0.  
### 创建一个新的socket。　　
#include<sys/socket.h>  
int socket(int domain,int type,int protocol);  //成功返回文件描述符;
domain指定socket的通信domain，type参数指定socket类型,这个参数通常创建流socket时被指定为SOCK_STREAM,而在创建数据报socket时会被指定为SOCK_DGRAM。　
protocol一般指定为0;   
### 绑定一个socket;
#include<sys/socket.h>  
int bind(int sockfd,const struct sockaddr *addr,socklen_t addrlen);   
``` 
 struct sockaddr {
    sa_family sa_family;    /*Address family(AF_* constant) */
    char sa_data[14];      /*Socket address(size varies according to socket domain)*/
 }
 ```
int listen(int sockfd,int bocklog
### 监听(listen)  
#include<sys/socket.h>  );  
bocklog参数是监听描述符的数量,在linux系统允许在运行时通过Linux特有的/proc/sys/net/core/somaxconn文件来调整这个限制,这个常量值被默认为128;   
###  接受连接(accept())  
#include<sys/socket.h>  
int accept(int sockfd,struct *addr,socklen_t *addrlen);   
accept()系统调用在文件描述符sockfd引用的监听流socket上接受一个接入连接,如果在调用accept()时不存在未决的连接,那么调用就会阻塞直到所有连接请求到达为止.   
理解accept()的关键点是它会创建一个新的socket，并且正是这个新的socket会与执行connect()的对等socket进行连接.  
### 连接到对等的socket:connect()   
connect()系统调用将文件描述符sockfd引用的主动socket连接到地址addr和addrlen指定的监听器socket上.  
#include<sys/socket.h>  
int connect(int sockfd,struct sockaddr *addr,socklen addrlen);  
addr和addrlen参数指定方式与bind()调用中对应参数的指定方式相同.  
### 交换数据报:recvfrom()和sendto()  
recvfrom()和sendto()系统调用在一个数据报socket上接收和发送数据报.   
#include<sys/socket.h>
ssize_t recvfrom(int sockfd,void *buffer,size_t length,int flags,struct sockaddr *src_addr,socklen_t *addrlen);  
ssize_t sendto(int sockfd,const *buffer,size_t length,int flags,const struct sockaddr *dest_addr,socklen_t addrlen);  
### 在数据报socket上使用connect()  
尽管数据报socket是无连接的,但在数据报socket上应用connect()系统调用仍然是起作用的,在数据报socket上调用connect()会导致内核记录这个socket的对等socket的地址,已连接的数据报socket就是指这种socket，非连接的数据报socket是指那些没有调用connect()的数据报socket(即新数据报socket的默认行为);  
IPC三种通信机制是指:信号量、共享内存、消息队列;
UNIX Domain Sockets  
socket API原本是为网络通讯设计的,但后来在socket的框架上发展出一种IPC机制,就是UNIX Domain Socket.虽然网络socket也可用于同一台主机的进程间通讯(通过loopback地址127.0.0.1)，但是UNIX Domain Socket用于IPC更有效:不需要经过网络协议栈,不需要打包拆包,  计算校验和,维护序号和应答等,只是将应用层数据从一个进程拷贝到另一个进程,这是因为,IPC机制本质上是可靠的通讯,而网络协议是为不可靠的通讯设计的.UNIX Domain Socket也提供面向流和面向数据包两种API接口,类似于TCP和UDP，但是面向消息的UNIX Domain Socket是可靠的, 消息既不会丢失也不会顺序错乱.   
### 绑定一个UNIX domain socket    
```
const char *SOCKNAME="/tmp/mysock";
int sfd;
struct sockaddr_un addr;
sfd=socket(AF_UNIX,sock_STREAM,0);    //Create socket  
if(sfd=-1){
errEXit("socket");
}
memset(&addr,0,sizeof(struct socketaddr_un));    //Clear structure  
addr.sun_family=AF_UNIX;                         //UNIX  domain  address  
strncpy(addr.sun_path,SOCKNAME,sizeof(add.sun_path)-1);
if(bind(sfd,(struct sockaddr *)&addr,sizeof(struct sockaddr_un)) == -1){
    errExit("bind");
}
```   



























