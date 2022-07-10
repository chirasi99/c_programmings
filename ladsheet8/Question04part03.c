#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                    
    struct node *nextptr;      
}*stnode;

void create(int n);     
void Deletion();	    
void display();             

int main()
{
    int n,num,pos;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    create(n);
    printf("\n Data entered in the list are : \n");		
    display();
    Deletion();
    printf("\n Data, after deletion of first node : \n");		
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

void Deletion()
{
    struct node *Del;
    if(stnode == NULL)
    {
        printf(" There are no node in the list.");
    }
    else
    {
        Del = stnode;
        stnode = stnode->nextptr;
        printf("\n Data of node 1 which is being deleted is :  %d\n", Del->num);
        free(Del);  
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