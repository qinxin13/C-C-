# C语言学习

### 计算机语言 

* 发展：低级->高级
  * 二进制指令->汇编指令（助记符）->B语言->C语言
  * C语言的编译器：Clang、GCC、WIN-TC、MSVC、Turbo
  * C/C++是编译型语言

###  创建C文件

* 工具vs2022

  * 创建新项目（空项目）

  * 创建源文件

    * 源文件.c
    * 头文件.h

  * 写代码

    * C语言中一定要有main函数（主函数），是程序的入口，main函数也只能有且只有一个

      * ```js
        #include <stdio.h>//包含头文件，std表示标准,i-input,o-output
        //标准的主函数写法
        int main(){
            printf("xxx");//printf使一个库函数，专门用来打印数据，
            return 0;//返回0，（int代表的是整型类型）,如果异常反应，则返回非0
        }
        //vs中运行代码的快捷键ctrl+f5/fn+ctrl+f5
        ```

    * 注释：ctrl+k+c

    * 取消注释：ctrl+k+u

### C语言中的数据类型

* 为了解决生活中的各种问题

* 数据类型

  * ```c
    char  //字符数据类型 1字节
    short //短整型      2字节
    int //整形          4字节
    long  //长整型      4字节
    long long  //更长整型  8字节
    float   //单精度浮点数  4字节
    double   //双精度浮点数  8字节
    ```

  * sizeof可以判断数据类型的大小

* 计算机中的单位

  * bit-比特位
  * byte-字节
    * 1字节=8bit
  * kb
  * mb
  * gb
  * tb
  * pb

* 变量和常量

  * 值可变的的为变量

    * 变量分为全局变量和局部变量
      * 全局变量
        * main函数外部定义的变量为全局变量
      * 局部变量
        * main函数內部定义的变量为局部变量

  * 当全局变量和局部变量名字冲突的情况下，局部优先

    * ```c
      int a=10;
      int main(){
          int a=20;//声明并初始化
          printf("a=%d\n",a);//最后结果为20
          return 0;
      }
      //但是不建议将全局和局部变量的名字写作一样
      ```

  * 值不变的是常量

    * scanf("%d %d",&num1,$num2)

      * 输入数据，$num1为取地址

        * ```c
          #define _CRT_SECURE_NO_WARNINGS  //防止scanf()报错，必须放在第一行
          #include <stdio.h>
          
          //全局变量
          int a = 10;
          int main() {
              
          
          	int num1 = 10;
          	int num2 = 30;
          	scanf("%d %d", &num1, &num2);
          	//求和
          	int sum = num1 + num2;
          	//输出
          	printf("%d\n", sum);
          	return 0;
          }
          ```

    * 在vs的安装路径下有一个文件
      * newc++file.cpp的文件
      * 在vs工程中创建新的.c或者.cpp文件的时候，都是拷贝newc++file.cpp这个文件的
      * 安装工具everything

    * 变量的作用域
      * 名字可以在哪里使用，哪里就是作用域
        * 局部变量作用域就是变量所在的局部范围内
        * 全局变量就是在一个项目中的任何地方使用
      * 声明来自外部的变量并使用
        * extern int a;
      * 变量的生命周期
        * 局部变量的生命周期：进入作用域开始到离开作用域结束
        * 全局变量的生命周期：整个程序的生命周期
      
    * 常量分类
    
      * 字面常量
    
      * const修饰的常变量
    
        * 常变量，在C语言中，const修饰的a，本质是变量，但是不能被修改，，有常量的属性，不能被直接修改
    
      * #define定义的标识符常量
    
        * #define MAX 100
    
      * 枚举常量
    
        * ```c
          	//可以一一列举出来的数据 
          enum Color {
              //一下三个就叫做枚举常量
          	RED,
          	GREEN,
          	BLUE
          };
          int main(){
              enum Color c=RED;//使用枚举常量
              return 0;
          }
          ```
    
    * 字符串+转义字符+注释
    
      * ```c
        int main(){
            "abcdefg";
            char arr[10];//存放字符类型的数组
        }
        //由双引号引起来的一串字符就叫做字符串
        ```
    
      * 字符串的结束标志是隐藏的"\0",不算作字符串的长度
    
      * strlen();求字符串的长度-string length
    
        * ```c
          int len = strlen("abc");
          printf("%d\n",len);//3
          ```
    
    * 转义字符
    
      * 转变原来字符的意思
      * \ + 字符
      * ![屏幕截图 2023-08-23 080710](C:\Users\lky\Desktop\屏幕截图 2023-08-23 080710.png)
    
    
    * %d - 打印整型
    * %c - 打印字符
    * %s - 打印字符串
    * %f - 打印float类型的数据
    * %lf - 打印double类型的数据
    
  * 注释

    * 注释可以梳理
    * 对复杂的代码进行解释
    * 写代码的时候写注释，是帮助自己，帮助别人
    
  * 选择语句和循环语句

    * if else
    * switch

  * 函数

    * 函数类型
    * 函数体
    * 返回

  * C语言是结构化的程序设计语言

    * 顺序结构
    * 选择结构
    * 循环结构
    
  * 数组
  
    * ```c
      数组：
          一组相同类型的数据的集合
          int arr[10]={1,2,3,4,5,6,7,8,9,10}
      	数组的下标是从0开始的
              
              int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
      	printf("%d\n", arr[9]);
      	int i = 0;
      	while (i < 10) {
      		printf("%d\n", arr[i]);
      		i++;
      	}
      	printf("abc\0eeee");//abc
      ```
  
  * C语言中的数据类型
  
    * 1.内置
      * char
      * short
      * int
      * long
      * long long
      * float
      * double
    * 2.自定义
      * struct
