#include<stdio.h>

#define max 100 

int queue1[max];
int queue2[max];
int rear=-1,front=-1;

int enqueueq1(int val)
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
        queue1[rear]=val;
        return val;
    }
}

int dequeueq1()
{
    int val;
    if (front==-1 || front >rear)
    {
        printf("Queue is underflow\n");
    }
    else
     {
          queueq1[front++];
          printf("\nDelete element of the Queue is %d\n", queueq1[front++]);
     }

}
int enqueueq2(int val)
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
        queue2[rear]=val;
        return val;
    }
}

int dequeueq2()
{
    int val;
    if (front==-1 || front >rear)
    {
        printf("Queue is underflow\n");
    }
    else
     {
          queueq2[front++];
          printf("\nDelete element of the Queue is %d\n", queueq2[front++]);
     }

}


int main()
{
   int n,num,i,val2,j;
   printf("Enter number of elemets in to Queue : ");
   scanf("%d", &n);
   printf("Enter element in the queue : \n");
   
   for (j=front;j<n-1;j++)
   {
     printf(" \n");
     scanf("%d", enqueueq1(j));
   }

   int count=1;
   i=1;
   for (j=front;j<n-1;j++)
{
   while(count<=n-i)
   {
       val2= dequeueq1();
       enqueueq2(j) =val2;
       count++;
   }
   if (count ==(n-1))
   {
       dequeue();
   }

   int x = queue1[n];
   queue1[n]=queue2[n];
   queue2[n]=x;

   int y= dequeueq1();
   dequeueq1()=dequeueq2();
   enqueueq2(j)=y;
}

 return 0;
}

  

