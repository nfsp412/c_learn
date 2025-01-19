#include <stdio.h>

#define ZERO 0 // #define的标识符常量

int main()
{
    // 常量

    3.14; // 字面常量

    // C99 const 修饰的常变量
    /*
    跟使用 #define定义宏常量相比，
    const定义的常量有详细的数据类型，
    而且会在编译阶段进行安全检查，
    在运行时才完成替换，所以会更加安全和方便。
    */

    const float PI = 3.14f;
    printf("%f\n", PI);

    return 0;
}
