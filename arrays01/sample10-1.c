#include<stdio.h>
int main()
{
    int a[6]={1,8,7,4,3,4};
    int b[4]={2,5,6,8};
    int c[10];
    int i,j,k;
    
    for(i=0;i<6;i++)
    {
        c[i]= a[i];
    }
     for(j=0;j<5;i=j++)
    {
        c[6+j]= b[j];
    }
printf("Merge array: \n");
for(k=0;k<10;k++)
{
    printf("%d\n",c[k]);
}

return 0;
}