#include <stdio.h>
#include <string.h>

#define MAX 50

char queue[MAX][MAX];
char temp1[MAX];
int front=-1, rear=-1;

void enqueue(char *s)
{
    if(rear == MAX-1)
    {
       printf("Queue overflow");
        return;
     }
        
    if(front == -1 && rear == -1)
    {
     front=rear=0;
    }
    else
    {
    rear=rear+1;
    }
  strcpy(queue[rear],s);
    
}

char* dequeue()
{
   if(front == -1)
   {
    printf("Queue is underflow");
   }
   else
   {
    strcpy(temp1,queue[front]);
    if(front == rear)
    {
    front =-1;
    rear = -1;
    }
    else
    {
    front=front+1;
    }
  return temp1;
   }
 }


void binary_number()
{
    
    char temp2[MAX];
    strcpy(temp1,dequeue());
    printf(" %s\t",temp1);
    strcpy(temp2,temp1);
    strcat(temp1,"0");
    enqueue(temp1);
    strcat(temp2,"1");
    enqueue(temp2);
}

int main()
{
    int num,i;
    printf("Enter your end binary number : ");
    scanf("%d", &num);
 
     char temp1[2]="1";
     enqueue(temp1);
     printf("Decimal numbers in 1 to %d\n",num);

     for(i=1;i<=num;i++)
     {
        binary_number();
     }
     
return 0;
}
