#include <stdio.h>

int main()
{
    // 输入
    // int a, b;
    // printf("input numbers a,b:");
    // scanf("%d%d", &a, &b); // 取址运算符
    // printf("%d,%d\n", a, b);

    // 一维数组名称,已经是指向了数组首个元素的地址了,因此无需使用&进行取址

    char c = 66;
    putchar('A');  // 输出单个字符A
    putchar(c);    // 输出变量c的ASCII对应字符
    putchar('\n'); // 执行换行效果，屏幕不显示

    char ch;
    ch = getchar(); //测试,前面使用了scanf,这里就无法使用了,为什么?
    putchar(ch);

    return 0;
}
