#include<stdio.h>
int main()
{
    int a[5]={2,5,6,9};
    int i,j;
    
    if(a[4]== 0)
    {
        for(i=5;i>1;i--)
        {
            a[i]=a[i-1];
        }
        a[1]=20;
    } 

   else
{
    printf("Array is already full.insert is not posible");
}

printf("New Array\n");
for(j=0;j<5;j++)
{
    printf("%d\n",a[j]);
}
return 0;
}