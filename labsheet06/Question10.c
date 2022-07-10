#include<stdio.h>
#include<string.h>

int main()
{
    int vowel=0,con=0;
    int len,i;
    char str[100];
    printf("Enter your string: \n");
    gets(str);

    len= strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]== 'e' || str[i]=='i' || str[i]=='o' || str[i]== 'u'|| str[i]=='A' ||str[i]=='E' || str[i]== 'I' ||str[i]=='O'|| str[i]=='U')
      {
         vowel=vowel+1;
        

      }
      else if(str[i]>='b'&& str[i]<='d'||
        str[i]>='f'&& str[i]<='h'||
        str[i]>='j'&& str[i]<='m'||
        str[i]>='p'&& str[i]<='t'||
        str[i]>='v'&& str[i]<='z'||
        str[i]>='B'&& str[i]<='D'||
        str[i]>='F'&& str[i]<='H'||
        str[i]>='J'&& str[i]<='M'||
        str[i]>='P'&& str[i]<='T'||
        str[i]>='V'&& str[i]<='Z')

        {
           con= con+1;
        }
        
    }
         int *p= &vowel;
         int *q=&con;
        printf("\nNumber of vowels in the string %d\n",*p);
        printf("Number of consonants in the string %d",*q);
}