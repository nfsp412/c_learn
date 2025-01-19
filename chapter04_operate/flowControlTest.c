#include <stdio.h>

int main()
{
    // switch
    int grade = 1;
    switch (grade)
    {
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    default:
        printf("other\n");
    }

    // for
    int num = 1;
    for (printf("a"); num < 3; printf("c"), num++)
    {
        printf("b");
    }

    //死循环
    /*
    for(;;)
    while(1)
    */

   

    return 0;
}
