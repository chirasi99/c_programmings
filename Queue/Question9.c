#include<stdio.h>
#include<conio.h>

#define MAX 10

int cq[10]={1,2,3,4,5,6,7,8,9,10};
int front=0, rear=0, count=0;

int  enqueue(int val)
{
    
    if(count == MAX)
    {
        printf("\n Circular Queue is full");
    }
    else
    {
        for(int i=0;i<10;i++)
        {
        cq[rear]=cq[i];
        rear = (rear +1)% MAX;
        count ++;
        }
    }
}

int dequeue()
{
    if(count ==0)
    {
        printf("\n Circular Queue is Empty.");
    }
    else
    {
        printf("\n Deleted element from Circular queue is %d ",cq[front]);
        front = (front +1)%MAX;
        count--;
    }
}

int main()
{
    int k;
    for(k=1;k<=7;k++);
    {
        enqueue(k);
    }

    for (k=1;k<=7;k++)
    {
        enqueue(dequeue());
    }

 return 0;
}