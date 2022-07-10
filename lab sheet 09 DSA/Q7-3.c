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
        }while(temp->next!=NULL);
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

void Deletion(int val)
{
  struct node *preptr, *ptr;
    if(head==NULL)
    {
      printf("Nothing to delete...\n\n");
    }
    else{
     
      ptr =head;
      while(ptr->next!=NULL)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      preptr->next=NULL;
      ptr->pre=preptr;
      free(ptr->next);
      
    
    }
}

int main()
{
    int n;
    for(int i=1;i<6;i++)
    {
        createlist(i);
    }
    printf("\n\n Before Deletion - Doubly Linked List Elemenets.......\n\n");
    display();

    Deletion(n);

    printf("\n\n After Deletion - Doubly Linked List Elemenets.......\n\n");
    display();
  
}