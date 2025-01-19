#include <stdio.h>

void main()
{
    // 二进制
    int x = 0b101010;
    printf("%d\n", x);//42

    //十六进制
    int a = 0x1A2B; // 十六进制，相当于十进制的6699
    printf("%d\n", a);//6699
    printf("%#x\n", a);//0x1a2b
    

}
