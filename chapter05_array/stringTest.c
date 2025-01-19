#include <stdio.h>

void main()
{

    // 方式1
    // 显式以'\0'为最后一个字符元素结束
    char s1[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};

    // 方式2
    char s2[] = {"hello world"};
    // 或者
    char s3[] = "hello world";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s2: %s\n", s3);
}
