#include<stdio.h>
#include<conio.h>


int val;
int top,max;
int stack[100];



int main()
{
    int getSize();
    int isEmpty(int stack[]);
    int push(int stack[],int val);
    int pop(int stack[]);
    int peek(int stack[]);
    int isfull(int stack[]);
    int printstack(int stack[]);

 return 0;
}

  
int isEmpty(int stack[])
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

int push(int stack[],int val)
{
    if(top=max-1)
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
        
 int pop(int stack[])
   {
       if(top=-1)
        {
            printf("\nstack is underflow.pop is impossible");
        }
        else{
            stack[top]=val;
            top--;
            return stack[top];
        } 
   } 
 
 int isfull(int stack[])
 {
     if(top=max-1)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }

int display(int stack[])
   {
       int i;
       if(top==-1)
       {
           printf("\nNo values.stack is empty.");
       }
       else
       {
       printf("\n Elements of the stack : \n");
       for(i=top;i>=0;i--)
       {
           printf("\n%d",stack[i]);
       }
       }
   }

int peek(int stack[])
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
   