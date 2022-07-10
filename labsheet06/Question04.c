#include<stdio.h>

int main()
{
    int num,i,arr[10];
    printf("Enter 10 elements in an array:\n");
    
    for(i=0;i<10;i++){
    printf("Element(%d) : ",i);
    scanf("%d", &arr[i]);
    }
    
    
    printf("\n\nArray elements are: \n");
    for(i=0;i<10;i++)
    {
        int *p = &arr[i];
        printf("Element(%d) : %d\n",i,*p);
    }

}