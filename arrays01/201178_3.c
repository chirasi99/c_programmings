#include<stdio.h>
int main()
{
    int a[20];
    int i,j,n,num,x;
    printf("Enter the array element of an array: ");
    scanf("%d", &n);
    printf("Elements in an array \n");
    for(i=0;i<n;i++)
    {
        printf("element[%d] : ",i);
        scanf("%d", &a[i]);
    }
    printf("enter no 3 in inlude it in to an array :");
    scanf("%d", &a[i]);
     for (i=0;i<n+1;i++)
     {
         for(j=i+1;j<n+1;j++){
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
         }
     }

     printf("elements in asecending order\n");
     for(i=0;i<n+1;i++)
     {
         printf("element[%d]-%d\n",i,a[i]);
     }
return 0;
}