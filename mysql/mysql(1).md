### Mysql常识
数据库软件应该称为DBMS(数据库管理系统),数据库是通过DBMS创建和操纵的容器，数据库可以是保存在硬设备上的文件。  
表是某种特定类型的结构化清单。
存储在表中的数据是一种类型的数据或一个清单，决不应该将顾客的清单与订单的清单存储在同一个数据库表中,这样做将使以后的检索和王文都很困难,应该创建两个表,每个清单一个表. 数据库中的每个表都有一个名字，用来标识自己，此名字是唯一的, 这表示数据库中没有其他表具有相同的名字.  
模式:关于数据库和表的布局及特性的信息.    
表由列组成,列中存储着表中某部分的信息.  
列表中的一个字段,所有的表都是由一个或多个列组成的.  
###　主键
唯一标识表中每行的这个列(或这组列)称为主键.主键用来表示一个特定的行,没有主键,更新或删除表中特定的行很困难,因为没有安全的方法保证只涉及相关的行.   
表中的任何列都可以作为主键, 只要它满足以下条件:  
任意两行都不具有相同的主键值;  
每行都必须具有一个主键值(主键列不允许NULL值).  
### 主键的最好习惯:   
* 不更新主键列中的值;  
* 不重用主键列的值;  
* 不在主键列中使用可能会更改的值  
DBMS可分为两类:一类为基于共享文件系统的DBMS,另一类为基于客户机-服务器的DBMS，
1.数据库目录  
/var/lib/mysql/  
2.配置文件  
/usr/share/mysql(mysql.server命令及配置文件)  
3.相关命令  
/usr/bin(mysqladmin mysqldump等命令)  
4.启动脚本  
/etc/rc.d/init.d/(启动脚本文件mysql的目录 )  
mysql语句的规范  
* 关键字与函数名称全部大写  
* 数据库名称，表名称，字段名称全部小写.  
* SQL语句必须以分号结尾 。  
### 数据类型  
数据类型是指列、存储过程参数、表达式和局部变量特征.它决定了数据的存储格式，代表了不同的信息类型 。  
### 整形  
TINYINT  有符号值:-2^7到2^7-1   无符号值:(0-2^8-1);  1个字节  
SMALLINT         -2^15到2^15-1           (0-2^16-1)  2个字节  
MEDIUMINT        -2^23到2^23-1           (0-2^24-1)  3个字节  
INT               -2^31到2^31-1          (0-2^32-1)  4个字节  
BIGINT            -2^63到2^63-1          (0-2^64-1)  5个字节    
### 浮点  
FLOAT[(M,D)]  //M是数字的总位数，D是小数点后面的位数  小数点后7位; 
DOUBLE[(M,D)]
### 日期时间型  
YEAR  1  
TIME  3  
DATE  3  
DATETIME   8  
TIMESTAMP     4   
### 数据表  
数据表是数据库最重要的组成部分之一，是其他对象的基础 .  
CREATE TABLE [IF NOT EXISTS] table_name(
column_name  data_type,
.. 
);  
查看数据表列表  
SHOW TABLES [FROM db_name] [LINK  'pattern' | WHERE expr]  
查看数据表的结构  
SHOW COLUMNS FROM tbl_name;  
### INSERT  
插入记录  
INSERT [INTO] tb1_name [(col_name,....)]  VALUES(val,...)   
### SELECT(记录查找)  
SELECT  expr,.....FROM  tb1_name   
### 空值与非空  
NULL,字段可以为空  
NOT NULL,字段值禁止为空   
### AUTO_INCREMENT  
*  自动编号，且必须与主键组合使用   
*  默认情况下 ,起始值为1,每次的增量为1.  
PRIMARY KEY  
* 主键约束  （一张数据表只能有一个）
* 每张数据表只能存在一个主键  
* 主键保证记录的唯一性  
* 主键自动为NOT NULL  
### UNIQUE KEY  
* 唯一约束  
* 唯一约束可以保证记录的唯一性
* 唯一约束字段可以为空值(NULL)
* 每张数据表可以存在多个唯一约束  
### DEFAULT 
* 默认值  
* 当插入记录时，如果没有明确为字段赋值，则自动赋予默认值.  
### 约束  
1.约束保证数据的完整性和一致性 。  
2.约束分为表级约束和列级约束.  
3.约束类型包括:  
NOT NULL(非空约束)   
PRIMARY KEY(主键约束)  
UNIQUE KEY(唯一约束)   
DEFAULT(默认约束)  
FOREIGN KEY(外键约束)    
### 外键约束(FOREIGN KEYp)
* 保持数据的一致性,完整性.  
* 实现一对已或一对多关系.  
#### 外键约束条件  
* 父表和子表必须使用相同的存储引擎，而且禁止使用临时表.  
* 数据表的存储引擎只能为InnoDB.  
* 外键列和参照列必须具有相似的数据类型,其中数字的长度或是否有符号为必须相同,而字符的长度则可以不同.  
* 外键列和参照列必须创建索引,如果外键列不存在索引的话,MySQL将自动创建索引.  
### 什么是存储引擎？ 
数据库存储时采用的技术称为存储引擎,采用不同的技术关系到数据存储的存储机制、索引技巧、锁定水平、最终决定了数据库的功能和能力.  
#### 编辑数据表的默认存储引擎  
default-storage-engine=INNODB  
### 外键约束的参照操作  
1.CASCADE:从父表删除或更新且自动删除或更新字表中匹配的行.  
2.SET NULL:从父表删除或更新行,并设置子表中的外键列.  
3.RESTRCT:拒绝对父表的删除或更新操作.  
4.NO ACTION:标准SQL的关键字, 在MySQL中与RESTRICT相同.  
### 表级约束与列级约束  
对一个数据列建立的约束,称为列级约束.  
对多个数据列建立的约束,称为表级约束. 
列级约束既可以在列定义时申明,也可以在列定义后申明.表级约束只能在列定义后申明.  
### 修改数据　　
##### 添加单列
ALTER TABLE tbl_name ADD [COLUMN] col_name column_definition [FIRST | AFTER col_name] 
##### 添加多列(不能指定位置关系)
ALTER TABLE tbl_name ADD [COLUMN] (col_name column_definition,........)   
##### 删除列　　
ALTER TABLE tb1_name DROP[COLUMN] col_name  
### 修改数据表　　
##### 添加主键约束
ALTER TABLE tb1_name ADD [CONSTRAINT [symbol]] PRIMARY KEY [index_type](index_col_name,....)    
### 添加唯一约束  
ALTER TABLE tb1_name ADD [CONSTRAINT[symbol]] UNIQUE [INDEX|KEY] [index_name] [index_type](index_coc_name,...)
### 添加外键约束  
ALTER TABLE tbl_name ADD [CONSTRAINT[symbol]] FOREIGN KEY [index_name] (index_col_name,....)  reference_definition
 ### 添加／删除默认约束　　
ALTER TABLE tb1_name ALTER[COLUMN] col_name {SET DEFAULT literal | DROP DEFAULT}
### 删除主键约束　　
ALTER TABLE tb1_name DROP PRIMARY KEY;  
### 删除唯一约束　　
ALTER TABLE tb1_name DROP{INDEX_KEY} index_name ;  
### 查看约束的名字  
SHOW INDEX FROM tbl_name;  
### 删除外键约束　　
ALTER TABLE tbl_name DROP FOREIGN KEY fk_symbol;
### 修改数据表　　
ALTER TABLE tb1_name MODIFY[COLUMN] col_name column_defintion [FIRST | AFTER col_name]  
### 修改列名称　　
ALTER TABLE tbl_name CHANGE [COLUMN] old_col_name new_col_name column_definition [FIRST | AFTER col_name]   
### 修改数据表　　
##### 方法一
ALTER TABLE tbl_name　RENAME [TO|AS] new_tbl_name  
##### 方法二　　　
RENAME TABLE tbl_name TO new_tbl_name [,tbl_name2 TO new_tbl_name2] ....  
### 1.插入记录(INSERT) 可以一次插入多个数据. 
INSERT [INTO] tbl_name [(col_name,.....)] {VALUES | VALUE} ({expr | DEFAULT},....),(...),...  
### 2.插入记录(INSERT SET)说明:与第一种方式的区别在于,此方法可以使用子查询(SubQuery);
INSERT [INTO] tbl_name SET col_name={expr|DEFAULT},.....   
### 3.插入记录(INSERT SELECT)   说明:此方法可以将查询结果插入到指定数据表. 
INSERT [INTO]  tbl_name [(col_name,....)] SELECT....  
### UPDATE更新记录(单表更新)   
UPDATE[LOW_PRIORITY] [IGNORE] table_reference SET col_name1={expr1 | DEFAULT} [,col_name2={expr2|DEFAULT}] ...[WHERE where_condition]  
### DELETE 删除记录(单表删除)  
DELETE FROM tbl_name [WHERE where_condition]   
### SELECT_expr(查找表达式)  
每一个表达式表示想要的一列,必须至少一个.   
多个列之间以英文逗号分隔。　　
星号(*)表示所有列,tbl_name,*可以表示命名表的所有列.  
查询表达式可以使用[AS] alias_name  为其赋予别名.  
别名可用于GROUP BY ,ORDRE BY或HAVING子句.  
### WHERE  
条件表达式:对记录进行过滤,如果没有指定WHERE字句,则显示所有记录.  在WHERE表达式中，可以使用MySQL支持的函数或运算符.  
### GROUP BY  
查询结果分组;  
[GROUP BY {col_name | position} [ASC | DESC],...]   
### HAVING  
分组条件  
[HAVING where_condition]   
### ORDER BY  
对查询结果进行排序.  
[ORDER BY {col_name | expr | position} [ASC | DESC],...]    
### 限制查询结果返回的数量  
[LIMIT {[offset,] row_count | row_count OFFSET offset}]   
### 子查询和连接 　　
设置编码: set NAMES gbk;   
子查询是指出现在其他SQL语句内的SELECT子句;  
eg:  
SELECT * FROM t1 WHERE col1=(SELECT col2 FROM t2);其中SELECT * FROM t1,称为Outer Query/Outer Statement  SELECT col2 FROM t2,称为SubQuery;   
子查询指嵌套在查询内部,且必须始终出现在圆括号内.  
子查询可以包含多个关键字或条件.  如DISTINCT,GROUP BY,ORDER BY,LIMIT,函数等.  
子查询的外层查询可以是:SELECT,INSERT,UPDATE,SET或DO。　　　
子查询可以返回标量、一行、一列或子查询.  
### 使用比较运算符的子查询.   
使用比较运算符的子查询  
= > < >= <= <> != <=>  
语法结构   
operand comparison_operator subquery;     
###　查看字符集  
show variables like '%char%';












