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



void DeleteEnd()
{
  struct node *preptr, *ptr;
    if(head==NULL)
    {
      printf("Nothing to delete...\n\n");
    }
    else{
     
      ptr =head;
      while(ptr->next!=head)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      preptr->next=ptr->next;
      free(ptr);
      preptr->next=head;
    
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
    printf("\nBefore Deletion......\n\n");
    display();

    DeleteEnd();

    printf("After Deletion.....\n\n");
    display();

}