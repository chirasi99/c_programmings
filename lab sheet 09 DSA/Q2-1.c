#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *head;
struct node *tail;



void display()
{
  struct node *temp = head;
   if(head==NULL)
  {
      printf("Circular linked list is Empty.......\n");
  }
  else
  {
  do
   {
    printf(" %d -> ", temp->data);
    temp = temp->next;
  }while(temp!=head);
  }
 printf("\n\n");
}



void insertBegin(int val)
{
  struct node *temp;
  struct node *newnode= (struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
      printf("Memory is Full....\n");
  }
  else{
    if(head==NULL)
    {
      head=newnode;
      tail=newnode;
      newnode->next=head;

    }
    else{
      newnode->data=val;
     
      temp =head;
      while(temp->next!=head)
      {
        temp=temp->next;
      }
      newnode->next=head;
      head =newnode;
      temp->next=newnode;
    
    }

  }
}

void Createlist(int num)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
   if(newnode==NULL)
   {
       printf("Memory is full.......\n");
   }
   else
   {
    newnode->next = NULL;
    if (head == NULL)
    {
      head= newnode;
      tail =newnode;
      newnode->next = head;
    } 
    else
    {
      tail->next=newnode;
      tail=newnode;
      tail->next=head;
    }
   }
}


int main()
{
  int n;
    for(int i=1;i<6;i++)
    {
     Createlist(i);
    }
    printf("\nBefore insertion......\n\n");
    display();

    printf("Insert a number that you want to add as first node to linked list  :  ");
    scanf("%d", &n);

    insertBegin(n);

    printf("After insertion.....\n\n");
    display();

}