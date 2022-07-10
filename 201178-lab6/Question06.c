#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

char stack[max];
int top = -1;

void push(char val)
{
    stack[++top] = val;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char val)
{
    if(val == '(')
        return 0;
    if(val == '+' || val == '-')
        return 1;
    if(val== '*' || val == '/')
        return 2;
    return 0;
}

int main()
{
    char stack[max];
    char *x, val;
    printf("Enter the expression : ");
    scanf("%s",stack);
    printf("\n");
    x = stack;
    
    while(*x != '\0')
    {
        if(isalnum(*x))
            printf("%c ",*x);
        else if(*x == '(')
            push(*x);
        else if(*x == ')')
        {
            while((val = pop()) != '(')
                printf("%c ", val);
        }
        else
        {
            while(priority(stack[top]) >= priority(*x))
                printf("%c ",pop());
            push(*x);
        }
        x++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}