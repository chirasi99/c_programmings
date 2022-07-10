#include<stdio.h>
int main()
{
    int n;
    int a[20];
    int i;

    printf ("Enter number of element in an array: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
    printf("enter a no in element[%d] -  ",i);
    scanf("%d", &a[i]);
    }
    printf("\nElements of an array\n");

    for( i=0;i<n;i++)
    {
    printf("Element[%d] - %d\n",i,a[i]);
   
    }
    return 0;
}
