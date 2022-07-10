#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    len =strlen(str);
    int *p =&len;

    printf("Length of string is %d",*p);
}