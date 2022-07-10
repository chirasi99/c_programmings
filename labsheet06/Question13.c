#include<stdio.h>

int main()
{
    int arr[100],n,i;
    printf("Enter no of element in an array : ");
    scanf("%d", &n);

    printf("Enter elements one by one..\n");
    for(i=0;i<n;i++){
    printf("Element[%d] : ",i);
    scanf("%d", &arr[i]);
    }
    
    printf("Reverse elements in array...\n");
    for(i=n-1;i>=0;i--)
    {
        int *p=&arr[i];
        printf("%d\n",*p);
    }
    return 0;
}
