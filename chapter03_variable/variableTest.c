#include <stdio.h>

// 文件作用域
int i1 = 1;

void main()
{
    // 块作用域
    int i2 = 1;
    printf("%d\n", i1);
    printf("%d\n", i2);

    /*
    先声明和赋值,再使用
    没有初始化赋值!!!
    */
    int age;  // 变量的声明
    age = 18; // 变量的赋值
    printf("%d\n", age);

    /*
    变量分类
    void
    指针
    构造类型: 数组,结构体,共用体,枚举
    基础数据类型: short,int,long,float,double,char

    */

    // 无字符串,使用字符数组

    // CPU位数不同,数据类型占用空间也不同

    // 默认都是signed,可以写unsigned
    signed int i1 = -1;
    printf("%d\n", i1);
    //    unsigned int i2 = -1;
    //    printf("%d\n",i2);

    // 科学计数法
    double x = 123.456e+3;
    printf("%lf\n", x);

    // 字符类型
    printf("%c\n", 66);
    printf("%c\n", 'B');
    printf("%d\n", 'B');
    printf("%c\n", '\\');//转义字符

}
