#include<stdio.h>
int main()
{
    int a[4]={2,5,6,9};
    int i,j,k;

    for(i=0;i<4;i++)
    {
        if(a[i]!=5)
        {
           printf("Searching is unsuccessfull") ;
        }
        else{
          for(j=1;j<3;j++)
        {
            a[j]=a[j+1];
        }

       }
    }
    
printf("New Array\n");
for(k=0;k<3;k++)
{
    printf("%d\n",a[k]);
}
return 0;
}