#include <stdio.h>
#include <string.h>

void change_Position(char *ch1, char *ch2)
{
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void permu(char *cht, int stn, int end)
{
   int i;
   if (stn == end)
     printf("%s \n", cht);
   else
   {
       for (i = stn; i <= end; i++)
       {
          change_Position((cht+stn), (cht+i));
          permu(cht, stn+1, end);
          change_Position((cht+stn), (cht+i)); 
       }
   }
}
 
int main()
{
    char str[100];
    printf("Enter your string : ");
    gets(str);
    int len = strlen(str);
    printf("The permutations of the string are : \n");
    
    permu(str, 0, len-1);
     
    return 0;
}
