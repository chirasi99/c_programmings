#include<stdio.h>
int main()
{
    int a[20];
    int n;
    int i;

    printf ("Enter number of element in an array: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
    printf("enter a no in element[%d] -  ",i);
    scanf("%d", &a[i]);
    }
   int min=a[0];
   for(i=0;i<n;i++)
   {
       if (min>a[i])
       {
            min = a[i];
        
       }
   }
    for(i=0;i<n;i++)
   {
       if (min==a[i])
       {
        min = a[i];
        printf("\nThe smallest Element of an array is element[%d]:%d",i,min);

       }
   }

    return 0;
}
