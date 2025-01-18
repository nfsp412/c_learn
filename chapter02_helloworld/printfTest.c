#include <stdio.h>

void main()
{
    int age = 18;
    double score = 90.5;
    char name[] = "sunpeng";
    char flag = 'A';
    float height = 180.74F;
    long class = 101L;
    short grade = 1;
    printf("name: %s, age: %d, score: %.2lf, flag: %c, height: %f, class: %ld, grade: %hd\n", name, age, score, flag, height, class, grade);

    printf("%5d\n", 123);//右对齐
    printf("%-5d\n", 123);//左对齐

    printf("%12f\n", 123.45);//限定宽度

    printf("%+d\n", -11);//显示正负号

    printf("Number is %.2f\n", 0.8);//小数位数
    printf("%6.2f\n", 0.8);
}
