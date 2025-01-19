#include <stdio.h>

// 使用enum定义枚举类
enum Sex
{
    // 括号中的MALE,FEMALE,SECRET是枚举常量
    MALE,
    FEMALE,
    SECRET
};

int main()
{
    // 枚举常量
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    // 注：枚举常量默认是从0开始，依次向下递增1的

    return 0;
}
