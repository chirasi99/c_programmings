#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define  max 50

int val;
int top,stack[max];

int main()
{
    int peek();
    printf("PEEK : %d",peek());
    return 0;
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