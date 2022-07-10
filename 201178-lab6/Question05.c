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

int main()
 {
    char str[100];
    int i, j,len;
    printf("Enter a string : ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        push(str[i]);
    }

    for(j=top;j>=0;j--)
    {
        if(pop()!=str[i])
        {
            printf("\nThis string is not a Palindrome String\n\n");
            return 0;
        }
    }

    printf("\nThis string is a Palindrome String\n\n");
    return 0;

 }