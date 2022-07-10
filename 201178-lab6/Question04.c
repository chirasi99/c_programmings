#include <stdio.h>  
#include <string.h>  
  
#define max 50  
int top,stack[max];  
  
void push(char val){  

      if(top == max-1)
      {  
          printf("stack overflow");  
      }  
      else 
      {  
          stack[++top]=val ; 
      }  
  
}  
  
void pop()
{   
      printf("%c",stack[top--]);  
}  
  
  
int main()  
{  
   char str[50];
   printf("Enter your string : ");
   gets(str); 
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++) 
   {
        push(str[i]);  
   }
   
  printf("\nReverse string....\n");
   for(i=0;i<len;i++) 
   { 
      pop(); 
   }
   return 0;
} 