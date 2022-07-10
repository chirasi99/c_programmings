#include <stdio.h>
#include <stdlib.h>

#define max 100

int queue[max];
int rear, front;
int bin_num[1000];

int enqueue(int val)
{
    
    if(rear==max-1)
    {
       printf("Queue is overflow");
    }
    else if(rear==-1 && front==-1)
    {
        front =0;
        rear =0;
    }
    else
    {
        rear++;
        queue[rear]=val;
        return val;
    }

}

int dequeue()
{
   int i,j,val;
    if (front==-1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
        queue[front]=val;
        printf("%d",queue[front++]);
        
        }
        printf("\n");
    } 
}

void binary_number(int n)
{
    
    int i = 0;
    while ( n> 0)
    {
    bin_num[i] = n % 2;
    n = n / 2;
    i++;
    } 
    for (int j = i - 1; j >= 0; j--)
    {
    enqueue(bin_num[j]);
    }

   for (int j = i - 1; j >= 0; j--)
   {
    dequeue();
   }
}


void binary_number_generation(int num)
{
for(int i=0; i<= num; i++)
{
    binary_number(i);
}
}

int main()
{
int num;
printf("Enter the end value : ");
scanf("%d",&num);
printf("\nBinary numbers from 1 to %d : ",num);
printf("\n");
binary_number_generation(num);
}