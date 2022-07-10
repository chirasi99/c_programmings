#include<stdio.h>
#include<conio.h>
#define max 100

int stack[100];
int val;
int top;


int isEmpty();
int push(int);
int pop();
int peek();
int isfull();
int display();
int getSize();

int main()
{
    isEmpty();
    push(34);
    push(56);
    pop();
    isEmpty();
    peek();
    push(23);
    isfull();
    peek();
    push(73);
    display();
 return 0;
}

  
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int val)
{
    if(top==max-1)
    {
        printf("\nstack is overflow.push in impossible");
    }
    else
    {
      stack[top]=val;
      top++;
      return stack[top];
    }
    
}
        
 int pop()
   {
       if(top==-1)
        {
            printf("\nstack is underflow.pop is impossible");
        }
        else{
            stack[top]=val;
            top--;
            return stack[top];
        } 
   } 
 
 int isfull()
 {
     if(top==max-1)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }

int display()
   {
       int i;
       if(top==-1)
       {
           printf("\nNo values.stack is empty.");
       }
       else
       {
       printf("\n Elements of the stack : \n");
       }
       for(i=top;i>=0;i--)
       {
           printf("\n%d",stack[i]);
       
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
    stack[top]=val;
    return stack[top];
    }
}

    int getSize()
    {
      int i;
      printf ("\n\nThe size of stack is %d\n",top+1);
    } 

 