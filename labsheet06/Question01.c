#include<stdio.h>

int main()
{
    int num1,num2,total;
    printf("Enter a first no : ");
    scanf("%d", &num1);
    printf("Enter a second no : ");
    scanf("%d", &num2);
    int *ptn1=&num1;
    int *ptn2=&num2;
    int *sum=&total;
    *sum = *ptn1 +*ptn2; 
    printf("\nSum of the numbers : %d",*sum);

    return 0;
    
}