#include <stdio.h>

int main()
{
    // 数据转换

    // 1隐式类型转换
    // 2宽类型赋值窄类型,可能导致精度丢失,c不会进行检查
    float f1 = 3.14159111;
    printf("%f\n", f1);

    // 3强制类型转换
    double x = 12.3;
    int y = 10;
    int z = (int)x + y;
    printf("%d\n", z);

    // 大于最大值，叫做`向上溢出（overflow）`；小于最小值，叫做`向下溢出（underflow）`。
    // 溢出很容易被忽视，编译器又不会报错，所以必须非常小心。
    return 0;
}