#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10

int main()
{
    int arr1[5];
    arr1[0] = 1;
    int res = arr1[0];
    printf("%d\n", res);

    // 求数组sizeof
    printf("%zd\n", sizeof(arr1)); // 20 int是4,一共5个元素,是20

    // 其他定义方式
    int arr2[5] = {22, 37, 90, 48, 95};
    for (size_t i = 0; i < sizeof(arr2) / sizeof(int); i++)
    {
        printf("%zd\n", arr2[i]);
    }
    int arr3[] = {1, 2, 3};           // 不写数组的长度
    int arr4[5] = {0};                // 初始化赋值
    int arr5[5] = {[0] = 1, [2] = 3}; // 指定索引赋值

    // 数组变量一旦声明，数组名指向的地址就不可更改,本质上数组名就是一个指针

    // 动态数组
    int a1[MAX_SIZE + 1];
    // or
    int n = 5;
    int a2[n + 1];
    // or
    // 使用malloc
    int length = 5;
    int *a3 = (int *)malloc(length * sizeof(int));
    free(a3);

    // 复制数组,可以使用循环遍历,或者memcpy函数
    int aa[3] = {1, 2, 3};
    int bb[3];
    memcpy(bb, aa, sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", bb[i]);
    }
}
