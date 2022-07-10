#include<stdio.h>  
#include<stdlib.h>
#include<malloc.h>  

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *start =NULL;
struct node *create(struct node *start);  
struct node *insert_end(struct node * start);   
struct node *delete_begin(struct node *start);
void count(struct node *start);   
struct node *display(struct node *start); 


void main ()  
{  
    int choice =0;  
    while(choice != 6)   
    {  
        printf("\n\nLinked list options....\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n1.Implement a Singly Linked List ");
        printf("\n2.Insert a new node to end ");
        printf("\n3.Delete the first node ");
        printf("\n4.Count the number of nodes ");
        printf("\n5.Display Linked List");
        printf("\n6.Exit\n");  

        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
             start = create(start);     
            break; 

            case 2:  
             start= insert_end(start);         
            break;

            case 3:  
             start=delete_begin(start);
            break;  

            case 4:  
              count(start);        
            break;

            case 5:  
               start= display(start);     
            break;

            case 6:  
               exit;        
            break;  
             
            default:  
            printf("Invalid choice.");  
        }  
    }  
}     
   
   
    struct node *create(struct node *start)
    {
        struct node *newnode, *ptr;
        int num;
        printf("\n Enter -1 to end");
        printf("\n Enter the data : ");
        scanf("%d", &num);
        while(num!=-1)
        {
            newnode - (struct node*)malloc (sizeof(struct node));
            newnode -> data =num;
            if(start==NULL)
            {
                newnode ->next =NULL;
                start =newnode;
            }
            else{
                ptr=start;
                while(ptr->next != NULL)
                {
                    ptr = ptr->next;
                    ptr->next=newnode;
                    newnode-> next = NULL;
                }
                printf("Enter the data : ");
                scanf("%d", &num);
            }
            
        }
         return start; 
    }


struct node *display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!= NULL)
        {
            printf(" Data = %d\n", ptr->data);     
            ptr= ptr->next;                     
        }
    return start;
} 
      
  
struct node *insert_end(struct node * start)
 
{  
     struct node *ptr,*newnode;  
    int num;  
    printf("Enter the data  : ");
    scanf("%d", &num);   
    newnode = (struct node*)malloc(sizeof(struct node)); 
    newnode->data=num;
    newnode->next=NULL;
    ptr=start;     
    while(ptr->next!= NULL)  
    {  
      ptr=ptr->next;
      ptr->next=newnode;      
    }  
  return start;   
} 


struct node *delete_begin(struct node *start)
{  
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    return start;
}  


void count(struct node *start)
{
  int count =0;
  struct node *ptr;
    ptr=start;
    while(ptr!= NULL)
        {
             count++;    
            ptr= ptr->next;                     
        }
    printf("Count is %d", count);  
}


