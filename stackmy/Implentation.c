#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int top,stack[20];

int push(int num)
{
    isfull();
    if (isfull==1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
    top=top+1;
    return num;
    }
}

int pop()
{
    isempty();
    if (isempty==1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
    top=top-1;
    }
}

int isempty()
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

int isfull()
{
    if(top==MAX-1)
    {
        return 1;
    }
    else
    {
     return 0;
    }

}

int display(int st[])
{
    isempty();
    if(isempty==1)
    {
      printf("Stack is empty..Nothing to display...\n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf(" %d  ",st[i]);
        }
    }
}

int peek(int st[])
{
    if(top==-1)
    {
        printf("Stack is empty..Nothing to display...\n");
    }
    else
    {
     return (st[top]);
    }

}
    
    
    




int main()
{
    int option,val,a[20];
    do
    {
     printf("\n **********Main Menu*********\n");
     printf("\n 1.PUSH");
     printf("\n 2.POP");
     printf("\n 3.PEEK");
     printf("\n 4.ISEMPTY");
     printf("\n 5.ISFULL");
     printf("\n 6.DISPLAY");
     printf("\n 7.EXIT\n\n");

     printf("\n Enter your choice : ");
     scanf("%d", &option);

     switch(option)
     {

         case 1:
         printf("\n Enter a value that you want to add to stack : ");
         scanf("%d", val);
         push(val);
         break;

         case 2:
         pop();
         break;

         case 3:
         peek(stack[20]);
         break;

         case 4:
         isempty();
         break;

         case 5:
         isfull();
         break;

         case 6:
         display(stack[20]);
         break;

     }

    } while (option != 7);

    exit;
    
}