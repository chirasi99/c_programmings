#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                   
    struct node *nextptr;       
}*stnode;

void create(int n);     	
void Deletion(int pos);	
void display();             	

int main()
{
    int n,num,pos;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    create(n);

    printf("\n Data entered in the list are : \n");		
    display();
    
    printf("\n Input the position of node to delete : ");
    scanf("%d", &pos);

    if(pos<=1 || pos>=n)
    {
     printf("\n Deletion can not be possible from that position.\n ");
    }
	      if(pos>1 && pos<n)
      {
       printf("\n Deletion successfully.\n ");
	   Deletion(pos);
      }

	    printf("\n After deletion linked list is   : \n");	
    display();
    return 0;
}
void create(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) 			
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
 
        stnode-> num = num;      
        stnode-> nextptr = NULL; 
        tmp = stnode;
 

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
 

            if(fnNode == NULL) 		
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->num = num;      
                fnNode->nextptr = NULL;
 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr;
            }
        }
    }
} 

void Deletion(int pos)
{
    int i;
    struct node *Del, *pre;
 
    if(stnode == NULL)
    {
        printf(" There are no nodes in the List.");
    }
    else
    {
        Del = stnode;
        pre = stnode;
 
        for(i=2; i<=pos; i++)
        {
            pre = Del;
            Del = Del->nextptr;
 
            if(Del == NULL)
                break;
        }
        if(Del != NULL)
        {
            if(Del == stnode)
                stnode = stnode->nextptr;
 
            pre->nextptr = Del->nextptr;
            Del->nextptr = NULL;
            free(Del);
        }
        else
        {
            printf(" Deletion can not be possible from that position.");
        }
    }
}

void display()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);  
            tmp = tmp->nextptr;                 
        }
    }
} 