#include<stdio.h>
int main()
{
   int n,j,a[20];
   int x,d,count;
    printf("no of elements in an array : ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(j=0;j<n;j++)
    {
      printf("Element[%d] - ",j);
      scanf("%d", &a[j]);
    }

    for(int j=0;j<n;j++)
    {
        
      count=0;
      d=a[j];
      x=j;
        for(j=0;j<n;j++)
        {
          if(d==a[j])
          {
            ++count;
          }
         
        }
       j=x;
        if(count>1)
        {
          printf("Duplicated element[%d] - %d\n",j,d);
        }
    }

    return 0;
}
