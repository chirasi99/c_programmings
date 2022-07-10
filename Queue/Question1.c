#include<stdio.h>
#define max 100

int queue[max];
int rear,front;

int insert()
{
    int n;
    printf("Enter the number to be inserted in the queue : ");
    scanf("%d", &n);

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
        queue[rear]=n;
        return n;
    }
}



int main()
{
    int insert();
    int num= insert();
    printf ("Insert element of Queue.......\n");
    printf("%d", num);

    return 0;
}