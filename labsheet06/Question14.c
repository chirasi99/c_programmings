#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int len,n,i;
    printf("Enter your string : ");
    gets(str);
    
    len=strlen(str);
    
    printf("Reverse string...\n");
    for(i=len-1;i>=0;i--)
    {
        char *p = &str[i];
        printf("%c",*p);
    }
    return 0;
}
