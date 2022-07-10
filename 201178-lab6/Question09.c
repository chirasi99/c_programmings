#include<stdio.h>

int gcd(int a,int b);

int main()
{
    int num1,num2;

    printf("Enter two numbers...\n");
    printf("Number 1 : ");
    scanf("%d", & num1);
    printf("Number 2 : ");
    scanf("%d", & num2);
    
    int res=gcd(num1,num2);
    printf("%d", res);

return 0;

}

int gcd(int a,int b)
{
    if(a>b)
 {
    if(b==0)
    {
        return (a);
    }
    return gcd(b,a%b);
}

if(a<b)
    {
    if(a==0)
    {
        return (b);
    }
    return gcd(a,b%a);
    }
}