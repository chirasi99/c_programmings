#include<stdio.h>
#include<conio.h>


int val;
int front, rear,max;
int queue[100];

int insert(int val)
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
        printf("\nInsert element of the Queue is %d \n",queue[rear]);
    }
}

int delete()
{
    int val;
    if (front==-1 || front >rear)
    {
        printf("Queue is underflow\n");
        return 1;
    }
    else
     {
          val  = queue[front];
          queue[front++];
          printf("\nDelete element of the Queue is %d\n", queue[front++]);
          
     }

}

int peek()
{
    if(front ==-1 || front >rear)
    {
        printf("Queue is empty");
    }
    else
    {
      return queue[front];
    }
}

int display()
{
    int i;
    if (front ==-1 || front >rear)
    {
    printf("Queue is empty\n");
    }
    else
    {
        printf("\nElements ofqueue are............\n");
        for(i=0; i<=rear; i++)
        {
            printf("\t %d",queue[i]);
        }
    }
}


int main()
{
    int num;
    int insert(num);
    int delete();
    int peek();
    int display();

    insert(1);
    insert(20);
    insert(12);
    insert(4);
    delete();
    delete();
    insert(6);
    display();

 return 0;
}

  
