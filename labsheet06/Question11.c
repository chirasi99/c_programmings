#include<stdio.h>
int main()
{
    int ptr[100];
    int i,j,n,x;
    printf("Enter the number of element in an array: ");
    scanf("%d", &n);
    printf("Elements in an array \n");
    for(i=0;i<n;i++)
    {
        printf("element[%d] : ",i);
        scanf("%d", &ptr[i]);
    }
    
     for (i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++){
            if(ptr[i]>ptr[j])
            {
               
                x=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=x;
            }
         }
     }

     printf("\n\nElements in sorted\n");
     for(i=0;i<n;i++)
     {
         printf("element[%d]-%d\n",i,ptr[i]);
     }
return 0;
}