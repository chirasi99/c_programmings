#include<stdio.h>
#include<stdlib.h>

int toh(int n,char beg,char aux,char end);

int main()
{
  int num;
  printf("Enter the number of discs : ");
  scanf("%d", &num);
  printf("\n");
  toh(num,'A','B','C');
  
  return 0;
}

int toh(int n,char beg,char aux,char end)
{
    if(n>=1)
    {
    toh(n-1,beg,end,aux);
    printf("%d disk move %c to %c.\n",n,beg,end);
    toh(n-1,aux,beg,end);
    }
}