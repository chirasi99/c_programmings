#include<stdio.h>

 int main()
    {
        char arr[500];
        int i;

        printf("ALphabets - UPPERCASE....\n");
        for(i=65;i<=90;i++) //ASCII values of 'A'=65 and 'Z'=90
        {
            int *p=&i;
            printf("%c\t",*p);
        }
        
        printf("\n\n\nALphabets - lowercase....\n");
        for(i=97;i<=122;i++)  /*ASCII values of 'a'=97 and 'z'=122*/
        {
           int *p =&i;
           printf("%c\t",*p);
        }
    return 0;
  }