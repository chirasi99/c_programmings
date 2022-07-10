#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

struct node *head=NULL;
struct node *tail=NULL;

void display()
{
    struct node *temp = head;
    if(head==NULL)
    {
        printf("Linked List is empty.....\n\n");
    }
    else
    {
        do{
            printf(" %d -> ", temp->data);
            temp =temp -> next;
        }while(temp!=NULL);
    }
}

void createlist(int num)
{
   struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
   if(newnode==NULL)
   {
       printf("Memory is full.......\n");
   }
   else
   {
    newnode->data=num;
    newnode->next = NULL;
    if (head == NULL)
    {
      head= newnode;
      tail =newnode;
      newnode->next =NULL;
      newnode->pre=NULL;
    } 
    else
    {
      tail->next=newnode;
      newnode->pre=tail;
      tail=newnode;
      tail->next=NULL;
    }
   }
}

void reverse()
{
      if (head == NULL) {
    printf("Nothing to reverse, the list is empty\n");
  } else {
    struct node *preptr = NULL;
    struct node *current = head;
    struct node *ptr = NULL;
    while (current != NULL) {
      ptr = current->next;
      preptr =current->pre;
      current->next = preptr;
      current->pre=ptr;
      preptr = current;
      current = ptr;
    }
    head = preptr;
  }
}


int main()
{
    for(int i=1;i<10;i+=2)
    {
        createlist(i);
    }

    printf("\n Doubly Linked List Elemenets.......\n\n");

    display();

    printf("\n\nReverse Doubly Linked List Elements.....\n\n");

    reverse();
    display();
}