#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()

{
  int i,data;
    struct node *newnode;
    struct node *temp,*head;

    head =(struct node *)malloc(sizeof(struct node));
    if(head ==NULL)
    {
      printf("Allocation is impossible");
      exit(0);
    }
   
   else
   {
    head->data = 2;
    head->next = NULL; 
    printf("%d -> ", head-> data);
   }

   temp = head;
    for(i=4; i<=10; i=i+2)
    {
    newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
    else
    {
        newnode->data = i;
        newnode->next = NULL;

        temp->next = newnode;
        printf("%d -> ", newnode-> data);
        temp = temp->next; 
    }
   
    }
    free(newnode);
    newnode->data = 0;
    printf("NULL");

}