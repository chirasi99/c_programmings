#include<stdio.h>
int main()
{
    int a[5]={2,5,6,9};
    int val,pos;
    int i,j;

    if(a[4]!=NULL)
    {
      printf("Array is already full.insert is not posible\n");
    }
    else{
    printf("Enetr a value you want to add in array: ");
    scanf("%d", &val);

    printf("position of adding element : ");
    scanf("%d", &pos);
    
    for(i=5;i>pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=val;
    }
int x;
for(j=0;j<5;j++)
{
   for(int k=0;k<5;k++)
   {
       if(a[j]<a[k])
       {
           x= a[j];
           a[j]=a[k];
           a[k]=x;
       }
   }
}

  printf("New Array\n"); 
  for(j=0;j<5;j++) 
   {
    printf("%d\n",a[j]);
  }

return 0;
}