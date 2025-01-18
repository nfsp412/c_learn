#include <stdio.h>

void main()
{
    int *p1; // 定义指针
    int a = 10;
    p1 = &a;          // 取地址运算符
    printf("%p\n", p1); // 0061FF18 内存地址

    printf("%d\n", *p1); // 取值运算符
}