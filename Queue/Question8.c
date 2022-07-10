#include<stdio.h>
#include<conio.h>

#define MAX 50

int cq[MAX];
int front=0, rear=0, count=0;

void enqueuecq()
{
    int val;
    if(count == MAX)
    {
        printf("\n Circular Queue is full");
    }
    else
    {
        printf("Enter element : ");
        scanf("%d", &val);
        cq[rear]=val;
        rear = (rear +1)% MAX;
        count ++;
        printf("\nData inserted in the Queue ");
    }
}

void dequeuecq()
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

void displaycq()
{
    int i,j;
    if(count ==0)
    {
        printf("\n Circular Queue is Empty");
    }
    else
    {
        printf("\n Elements in Circular Queue are.....");
        j=count;
        for(i=front; j!=0;j++)
        {
            printf("%d \t",cq[i]);
            i= (i+1)% MAX;
        }
    }
}

int main()
{
    void enqueuecq();
    void dequeuecq();
    void displaycq();

 return 0;
}