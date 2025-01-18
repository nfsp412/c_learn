#include <stdio.h>

// 文件作用域
int i1 = 1;

void main()
{
    // 块作用域
    int i2 = 1;
    printf("%d\n", i1);
    printf("%d\n", i2);
}
