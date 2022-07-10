#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * pre;
    struct node * next;
};

struct node *head,*tail;

void display()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
    {
        printf(" Nothing to display....");
    }
    else
    {    temp=head;
        while(temp != NULL)
        {
            printf(" node %d : %d\n", n, temp->data);
            n++;
            temp = temp->next; 
        }
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
 
void Delete(int place)
{
    struct node *ptr;
 
    ptr = head;
    for(int i=1;i<=place-1 && ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    if(ptr != NULL)
    {
        ptr->pre->next = ptr->next;
        ptr->next->pre = ptr->pre;
 
        free(ptr);
    }
    else{
        printf("Invalid Position....\n");
    }
    
} 



int main()
{
    int i,pos,val,n;   	
    printf("\n\nInput the number of nodes : ");
    scanf("%d", &n);

    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("Enter nodes of Linked List-%d :   ",i);
        scanf("%d", &val);
        createlist(val);
    }
   
    printf(" \n\nInput the position ( 1 to %d ) to delete a node : ",n);
    scanf("%d", &pos);


printf("\n\nBefore Deletion - Doubly Linked List....\n\n");
display();

  if(pos<=1 || pos>=n)
    {
     printf("\n Invalid position.....\n ");
    }
     if(pos>=1 && pos<=n)
      {
       Delete(pos);  
      }  


printf("\n\nAfter Deletion - Doubly Linked List....\n\n");
display();
    return 0;
}
 



