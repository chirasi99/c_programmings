#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    int *ptr;
    printf("Enter no of elements in an array : ");
    scanf("%d", &n);

    ptr=(int *) calloc(n,sizeof(int));

    printf("Numbers in an array...\n");

    for(i=0;i<n;i++)
    {
        printf("Element(%d) : ",i);
        scanf("%d", &ptr[i]);
    }
    int max= ptr[0];
    for(i=0;i<n;i++)
    {
        if(ptr[i]>max)
        {
        max = ptr[i];
        }
    }
   printf("\nLargest element : %d",max);

   free(ptr);
   return 0;

}