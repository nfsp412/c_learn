#include <stdio.h>

int main()
{
    // 比较运算符
    // i < j < k
    // int j = 10;
    // if (15 < j < 20) // 语法没问题,但是含义错误,从左到右计算,先算15<j返回0,再算0<20返回1
    // {
    //     printf("j大于15,且小于20"); // 输出此语句
    // }
    // else
    // {
    //     printf("j不在15到20之间");
    // }

    // i < j < k
    // int j = 10;
    // if (15 < j && j < 20) // 正确方式是使用逻辑运算符
    // {
    //     printf("j大于15,且小于20");
    // }
    // else
    // {
    //     printf("j不在15到20之间"); // 输出此语句
    // }

    // 逻辑运算符存在短路现象
    int i = 0;
    int j = 10;
    if (i && j++ > 0)
    {
        printf("床前明月光");
    }
    else
    {
        printf("我叫郭德纲");
    }

    printf("%d\n", j); // 10

    // 非0为真,0为假
    int a = 3;
    if (!a)
    { // 假
        printf("!a");
    }

    // sizeof
    int x = sizeof(int); // 通常是 4 或 8
    printf("%zd\n", x);  // 使用%zd
}
