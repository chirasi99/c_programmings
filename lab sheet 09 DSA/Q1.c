#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}; 

struct node *head=NULL;
struct node *tail=NULL;

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
    for (int i = 2; i < 10; i = i + 2)
   {
    Createlist(i);
   }
    printf("\n\n Circular Linked List Elements : .....................\n\n");
    display();
}



