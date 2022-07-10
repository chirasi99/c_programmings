#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;
    int sum=0;

    printf("Enter the number of element in an array: ");
    scanf("%d", &n);
    printf("Elements in an array \n");
    for(i=0;i<n;i++)
    {
        printf("element[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    int *p;
    p=arr;

     for(i=0;i<n;i++)
     {
        sum = sum +*p;
        p++;
     }
      printf("\n\nSum of all elements in an array : %d\n",sum);
return 0;
}