#include <stdio.h>
#include <string.h>
 
#define MAX 100

int top=-1;
int stack[MAX];

int isFull() {   
    if(top >= MAX-1)
        return 1;
    else
        return 0;
}
 
int isEmpty() {
 if(top == -1)
     return 1;
 else
     return 0;
}

int push() {
    if (isFull())
        printf("Stack is overflow.push is impossible.\n");
    else {  
         return stack[top++];
    }
}
 
int pop() {
    if (isEmpty())
        printf("Stack is underflow.pop is impossible.\n");
    else {
     top = top - 1;
        return stack[top];
    }
}

int peek()
{
    if (top==-1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        return stack[top];
    }
}

int main()
 {
    char str[100];
    int i, len,x;
    printf("Enter a string with paranthesis : ");
    scanf("%c", &str);

    len = strlen(str);

    for(i=0; i<len; i++)
 {    
     if(str[i]== '{' || str[i]=='[' || str[i]=='(' )
        {
           push(str[i]);
           continue;
        }
    else if(str[i] == '}' || str[i]==']' || str[i]==')' )
     {
         if(str[i]=='}')
         {
             if(peek()=='{')
             {
                 pop();
             }
             else
             {
                 x=1;
                 break;
             }
         }

        else if(str[i]==']')
         {
             if(peek()=='[')
             {
                 pop();
             }
             else
             {
                 x=1;
                 break;
             }
         }

        else if(str[i]==')')
         {
             if(peek()=='(')
             {
                 pop();
             }
             else
             {
                 x=1;
                 break;
             }
         }
      }
        
    }

     
    if(x!=1)
    {
        printf("\n Valid  Expression\n");
    }
    else
    {
       printf("\n InValid  Expression\n");  
    }
   
return 0;
 }