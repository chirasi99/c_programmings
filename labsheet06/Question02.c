#include<stdio.h>
int adding(int *ptn1,int * ptn2,int *total)
{

    *total = *ptn1 +*ptn2;
    return *total;
}

int main()
{
    int num1,num2,sum;
    printf("Enter a first no : ");
    scanf("%d", &num1);
    printf("Enter a second no : ");
    scanf("%d", &num2);
    int res=adding(&num1,&num2,&sum);
    printf("\nSum of the numbers : %d",res);

    return 0;
    
}