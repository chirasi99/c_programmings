#include<stdio.h>

int main()
{
    int arr[9]={1,2,0,3,5,7,0,9,11};
    int k,m,i,j=0;

    for(i=0;i<9;i++)
    {
        if(arr[i]==0)
        {
          arr[j]=arr[i];
          j++;
          arr[i]=arr[j];
        }
        
    }

    for(i=0;i<9;i++)
    {
        printf("%d\t",arr[i]);
    }
}