/**
 * 存储类别和，链接和内存管理章节包含内容
 * 1. 存储类别包含： 作用域、链接、存储期、自动变量、寄存器变量、块作用域的静态变量、外部链接的静态变量、内部链接的静态变量、多文件、
 *  存储类别说明符、存储类别和函数、存储类别的选择
 *  2. 随机数函数和静态变量
 *  3. 掷骰子
 *  4. 分配内存 ：malloc()和free();  free()的重要性  calloc()函数 动态内存配和变长数组 存储类别和动态内存分配
 *
 *  存储期：用于描述对象，指对象在内存中保存了多长时间，
 *  标识符用于访问对象，可以用作用域和链接来描述 ,表面程序哪些部分可以使用他们
 *
 *  作用域
 *   c变量的作用域：
 *          块作用域
 *              从定义处到该定义块的结尾处
 *              声明内层块中的变量作用域只作用于内层块 如for循环中声明变量，for循环完后 声明的变量就不可用了 ,由于c99放开了限制，在for循环内可以声明变量
 *              一般块的作用域用花括号区分 ，虽然for while 等没有用花括号 但也算块的一部分
 *           函数作用域：
 *                  仅用于goto 标签 ，一个标签首次出现在函数的内层块中，它的作用域也延伸至整个函数，
 *
 *
 *          函数原型作用域
 *                  用于函数原型中的形参名
 *                  从形参定义到函数原型声明结束
 *                  只有在变长数组中形参名才有用
 *                  如 void via_arr(int m,int n int a[m][n])
 *
 *          文件作用域
 *                  变量定义到函数外面，就具有文件作用域，具有文件作用域的变量，在整个文件中都是可见的
 *                  物理上一个源代码.cpp 会有多个头文件
 *                  c预处理实际上是用 包含头文件的内容替换掉#include 指令
 *                  所以编译的源代码文件和头文件都被看成一个单独的的文件，即翻译单元
 *                  所以描述一个文件作用域时，实际上是在整个翻译单元内可见，不能狭隘的认为在整个文件中可见
 *
 *                  每个翻译单元对应一个源代码文件和它所包含的头文件
 *  C的链接
 *      内部链接
 *          具有文件作用域的变量
 *          使用存储类别说明符 static
 *
 *          内部链接变量只能在一个翻译中使用
 *
 *      外部链接
 *          具有文件作用域的变量
 *          未使用存储类别说明符 static
 *
 *          外部链接变量可以在多文件程序(多个翻译单元)中使用
 *
 *      无链接
 *          具有块作用域的变量、函数作用域、函数原型作用域的变量都是无链接的变量
 *
 *  C 的4种存储期
 *      静态存储期
 *          程序执行期间一直存在
 *          文件作用域变量都具有静态存储期
 *          注意 文件作用域的变量 关键字 static 只是表名链接属性，并非存储期
 *
 *          块作用域的变量 使用关键字 static 时，也就具有静态存储期了  但作用域还是块级的
 *
 *      线程存储期
 *              用于并发编程,程序执行被分为多个线程
 *              具有线程存储期的变量，从被声明到线程结束时一直存在
 *              以关键字 _Thread_local 声明一个对象时，每个线程都获得该变量的私有备份
 *
 *
 *
 *      自动存储期
 *           块作用域的对象都具有自动存储期
 *           即进入块定义时分配内存，离开块时释放内存
 *
 *           边长数组 从声明处到块的末尾
 *      动态分配存储期
 *
 *  C的存储类别
 *      存储类别            存储期         作用域         链接          声明方式                                    特点
 *      自动                  自动          块              无           块内                                   块内才可以访问，块开始分配内存，块结束释放内存。 同一变量，外层块的变量对内层块是隐藏的，即内层块中变量和外层块中变量的存储地址是不同的
 *
 *      寄存器                自动          块              无            块内，使用关键字register
 *
 *   静态外部链接             静态          文件          外部          所有函数外
 *   静态内部链接             静态          文件          内部          所有函数外部，使用关键字static
 *   静态无链接              静态          块               无           块内， 使用关键字static
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
#include <stdio.h>

int main(void){
   const char *p = "hello is me";
   printf("%s",p);
}

