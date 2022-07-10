#include<stdio.h>

int main()
{
  int i,j,n,a,b;
  
  printf("Enter the numbers of rows : ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
    if(i%2==1)
    {
        for(j=1;j<=i;j++)
        {
        if(j%2==1)
        {
           a=1;
           printf("%d",a);
        }
        else
        {
            b=0;
            printf("%d", b);
        }
        }
     printf("\n");   

    }
    else
    {
      for(j=1;j<=i;j++)
        {
        if(j%2==1)
        {
           b=0;
           printf("%d",b);
        }
        else
        {
            a=1;
            printf("%d", a);
        }
        }  
    printf("\n");
    }
  }



}