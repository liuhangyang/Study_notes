容器(Container)是Component的子类,因此容器对象本身也是一个组件，具有组件的所有性质,可以调用Component类的所有方法.   
Frame 代表常见的窗口.  
frame默认使用BorderLayout作为布局管理器.   
Panel 是AWT中的另外一个典型的容器,它代表不能独立存在，必须放在其他容器中的容器,panel外在表现是一个矩形.默认使用FlowLayout作为布局管理器.   
ScroolPane是一个带滚动条的容器,它也不能独立存在,必须被添加到其它容器中.默认使用BorderLayout作为布局管理器.   
FlowLayout有三个构造器:  
FloWLayout():使用默认的对齐方式，垂直间距，水平间距.
FlowLayout(int aligin):和FlowLayout(int aligin,int hgap,int vgap);  
align的值有:FlowLayout.LEFT  CENTER   RIGHT  .  
Panel  和 Applet默认使用FlowLayout布局管理器 .  
pack方法是window容器提供的一个方法,该方法用于将窗口调整到最佳.    
BorderLayout布局管理器:
Frame，Dialog,ScrollPane默认使用BorderLayout布局管理器.
构造器:
BorderLayout()使用默认的垂直和水平间距.BorderLayout(int hgap,int vgap);
GridLayout布局管理器.   
构造器:  
GirdLayout(int row,int col);采用指定的行数，列数,默认的垂直和水平间距.  
GirdLayout(int row,int col,int hgap,int vgap);  
BoxLayout布局管理器:  
构造器:
BoxLayout(Container target,int axis);指定创建基于target容器BoxLayout 布局管理器.  
axis有BoxLayout.X_AXIS(横向),BoxLayout.Y_AXIS(纵向)两个方向.  
BoxLayout 通常和Box容器结合使用,默认使用BoxLayout布局管理器.   
 构造器:  
 createHorizontalBox();创建一个水平排列的Box容器.  
 createVerticalBox()；创建一个垂直排列的Box容器.  
 对话框:
 Dialog 是Window类的子类, 是一个容器类,属于特殊组件,对话框是可以独立存在的顶级窗口.需要注意的是.  
 对话框通常依赖于其他窗口,就是通常有一个parent窗口.  
 对话框有非模式和模式两种,当某个模式对话框被打开之后,该模式对话框总是位于它依赖的窗口之上.在模式对话框被关闭之前,它依赖的窗口无法获得焦点.   
 构造器参数:  
 owner: 指定该对话框所依赖的窗口,既可以是窗口，也可以是对话框.  
 title:该对话框的标题.  
 modal：指定了该对话框是否是模式的,可以是true和false;
 模式对话框会阻塞程序;