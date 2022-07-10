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
        printf(" Nothing to display.....\n\n");
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
 
void Insert(int num,int place)
{
    int i;
    struct node *temp;
 
    if(tail==NULL)
    {
        printf("No data in linked list....\n\n");
    }
    else
    {
        temp= head;
        i=1;
        while(i<place-1 && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        if(temp!=NULL)
        {
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=num;
            newnode->next=temp->next;
            newnode->pre=temp;
            
            if(temp->next !=NULL)
            {
                temp->next->pre=newnode;
            }
            temp->next = newnode;
        }
        else
        {
            printf("Invalid Position");
        }
    }
} 



int main()
{
    int i,pos,val,n,m;   	
    printf(" \n\nInput the number of nodes : ");
    scanf("%d", &n);
    
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        printf("Enter nodes of Linked List-%d ",i);
        scanf("%d", &val);
        createlist(val);
    }
   
    printf(" \n\nInput the position ( 1 to %d ) to insert a node : ",n);
    scanf("%d", &pos);

    printf("\n \nInput the number of  insert a node : ");
    scanf("%d", &m);

printf("\n\nBefore Insertion - Doubly Linked List....\n\n");
display();

printf("\n\nAfter Insertion - Doubly Linked List....\n\n");
Insert(m,pos);  
display();
    return 0;
}
 