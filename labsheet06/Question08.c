#include<stdio.h>

int factorial(int num,int *fac)
{ 
if(num<= 1)
{
    return 1;
}
else
{
    *fac=1;
    for(int i=1;i<=num;i++)
     {
        *fac=*fac*i;
     }
     return *fac;
}
 
}

int main()
{ 
     int num,fac;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    printf("Factorial of %d is %d\n",num, factorial( num,&fac));
return 0;
}