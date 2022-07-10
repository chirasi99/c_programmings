#include<stdio.h>


typedef struct {
    float no1;
    float no2;
}calc;


void main()
{
    calc c;

        printf("Enter First Number: ");
        scanf("%f", &c.no1);
        printf("Enter Second Number : ");
        scanf("%f", &c.no2);

        float add = c.no1 + c.no2;
        float sub = c.no1 - c.no2;
        float mul = c.no1 * c.no2;
        float div = c.no1 / c.no2;

        printf("\n\n");
        printf("SUM of two Numbers : % f  \n ", add);
        printf("SUBSTRACTION of two Numbers : % f  \n ", sub);
        printf("MULTIPLICATION of two Numbers : % f  \n ", mul);
        printf("DIVITION of two Numbers : % f  \n ", div);
}