#include<stdio.h>
int main()
{
    int m,n;
    int a[m];
    int b[n];
    int c[m+n];
    int i,j,k;
    
    for(i=0;i<m;i++)
    {
        c[i]= a[i];
    }
     for(j=0;j<n;i=j++)
    {
        c[m+j]= b[j];
    }
printf("Merge array: \n");
for(k=0;k<10;k++)
{
    printf("%d\n",c[k]);
}

return 0;
}