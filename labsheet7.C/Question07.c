#include<stdio.h>

int main()
{
    int i,j,n;
    
    for(i=1;i<=9;i++)
    {
        n=4;
        for(j=1;j<=n;j++)
        {
            if(j==5)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        
    }
}