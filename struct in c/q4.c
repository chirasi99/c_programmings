#include<stdio.h>

int Add(int a , int b)
{
    return (a + b);
}

void main()
{
    int x = 8;
    int y = 7;
    int result;
    result = Add(x, y);
    printf("Result is %d  ", result);
}