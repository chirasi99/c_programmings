#include<stdio.h>

int main()
{
    int n,i,j;
    int arr[100];

    printf("Enter number of elements in an array : ");
    scanf("%d", &n);

    printf("Enter Elements one by one in an array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    
    printf("\n\n\nElements of the array\n ");
    for(i=0;i<n;i++)
    {
        int *ptr;
        ptr= &arr[i];
        printf("%d\n", *ptr);
    }

}