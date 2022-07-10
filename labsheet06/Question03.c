#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter a first no : ");
    scanf("%d", &num1);
    printf("Enter a second no : ");
    scanf("%d", &num2);
    int *ptn1=&num1;
    int *ptn2=&num2;

    if(*ptn1>*ptn2)
    {
        printf("Max : %d",*ptn1);
    }
    else
    {
        printf("Max : %d",*ptn2);
    }
    
    return 0;
    
}