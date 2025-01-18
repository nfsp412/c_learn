#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define BOOL int

void main()
{
    //C89没有单独布尔类型,非0整数为真,整数为假
    int flag = 1;
    if (flag)
    {
        printf("true\n");
    }


    BOOL flag1 = TRUE;
    if (flag1)
    {
        printf("true\n");
    }
    
    //C99
    bool flag2 = true;
    if (flag2)
    {
        printf("true\n");
    }
    
}
