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
   int max1=a[0];
   int max2=a[0];

   for(i=0;i<n;i++)
   {
       if (max1<a[i])
       {
            max1 = a[i];
       }  
   }
    for(i=0;i<n;i++)
   {
       if(max1>a[i])
       {
       if (max1>max2)
       {
            max2 = a[i];
       } 
       } 
   }

    
    printf("\nThe smallest Element of an array is element:%d",max2);
    return 0;
}
