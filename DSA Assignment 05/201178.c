#include<stdio.h>    //Input/Output functions
#include<stdlib.h>    //General utility functions[including malloc,free,exit functions in this code]
#include<stdbool.h>  //contains four macros for a Boolean data type[including bool function]

struct node   //creating struct fuction
{
    int ProcessId;  //getting integer values for ProcessId
    int EndMem_Size;  //getting integer value for find memory size of End location of the Memory portains
    bool IsFree;   //checking whethear that memory portains are free or not
    struct node *next;   //pointer to the next node
};

struct node *head=NULL;  


void Allocation(int Pro_ID1, int SizeOfMemory) //creating Allocation function that contains Pro_ID1 and SizeOfMemory as parameters
{
  struct node *ptr=head;  //getting two pointers as ptr and preptr  and firstly they pointed to the head
  struct node *preptr =head;

  while (ptr != NULL) //check whether that node is NOT EXACTLY EQUIVAL to null and looping
  {
    if(ptr->IsFree==true) //checking whether that pointed node has free memory space
    {
      if(ptr->EndMem_Size-preptr->EndMem_Size> SizeOfMemory) //checking suitable memory space
      {
       struct node *newnode=(struct node*)malloc (sizeof(struct node)); //allocate newnode and set its data
       preptr->next=newnode;  
       newnode->next=ptr;
       newnode->ProcessId=Pro_ID1;
       newnode->EndMem_Size=preptr-> EndMem_Size + SizeOfMemory;
       newnode->IsFree=false;

      }
      else if((ptr->EndMem_Size-preptr->EndMem_Size==SizeOfMemory))  //checking suitable memory space
      {
        ptr->IsFree=false;
        ptr->ProcessId=Pro_ID1;
      }
      else if(ptr==NULL)
      {
        printf("Memory Portion Size is too much,Can not be allocated Memory.....\n\n"); //not enough memory spaces for allocation
      }
    }
    preptr=ptr;      //moving pointers to going forward 
    ptr=ptr->next;   //moving pointers to going forward
  }
}


void DeAllocation(int Pro_ID2)  //creating Allocation function that contains Pro_ID2 as parameter
{
  struct node *temp1 = head; //createing 3 pointers as temp1,temp2,temp3 and all are pointer to the head
  struct node *temp2 = head;
  struct node *temp3 = head;

    
  while(temp2->ProcessId!=Pro_ID2 && temp2->next!=NULL)  //checking processId that user want to terminate is not pointed to the correct node
  {
    temp1=temp2;    //moving pointers to going forward
    temp2=temp2->next; //moving pointers to going forward
    temp3=temp2->next; //moving pointers to going forward
  }

  if(temp2->ProcessId!= Pro_ID2 && temp2->next==NULL) //checking processId that user want to terminate is not pointed to the correct node
  {
    printf("\nInvalid ProcessID .....\n");  //if user given invalid processId then print it
  }

  else if(temp2->ProcessId== Pro_ID2 && temp2->next==NULL) //checking processId that user want to terminate is in pointed node
  {
    if(temp1->IsFree==true)  //checking relavant node is free or not
    {
      temp1->EndMem_Size=temp2->EndMem_Size;
      temp1->next=NULL;
      free(temp2);
    }
    else
    {
      temp2->IsFree=true;
    }
  }

  else
 {

  if(temp1->IsFree==false && temp3->IsFree==true) //checking Fist ponited node is not free  and third pointed node is free 
  {
   temp2->next=temp3->next;
   temp2->EndMem_Size=temp3->EndMem_Size;
   temp2->IsFree=true;
   free(temp3);
  }

  else if(temp1->IsFree==true && temp3->IsFree==true)  //checking Fist ponited node is free  and third pointed node is free
  {
   temp1->EndMem_Size=temp3->EndMem_Size;
   temp1->next=temp3->next;
   free(temp2);
   free(temp3);
  }

  else if(temp1->IsFree==false && temp3->IsFree==false)  //checking Fist ponited node is not free  and third pointed node is not free
  {
   temp2->IsFree=true;
  }

  else  //checking Fist ponited node is free  and third pointed node is not free
  {
   temp1->EndMem_Size=temp2->EndMem_Size;
   temp1->next=temp3;
   free(temp2);
  }
  
}

}



void Display()  //print output
{
  struct node *temp=head;   //Getting pointer as temp and point it in to head 
  while(temp!=NULL) //pointing temp untill the linked list end node
  {
    if((temp->ProcessId==-1))  //print operating system
    {
      printf("      0K -----------------------------\n");
      printf("         |                           |\n");
      printf("         |     Operating System      |\n");
      printf("         |                           |\n");
      printf("    %4dK -----------------------------\n", temp->EndMem_Size);  //print os memory size

    }
    else if (temp->IsFree==true)  //printing memory free locations
    {
     
      printf("         |                           |\n");
      printf("         |         Free              |\n");
      printf("         |                           |\n");
      printf("    %4dK -----------------------------\n",temp->EndMem_Size); //print the memory size of free memory portion 

    }
    else  //printing user input memory portions 
    {
     printf("         |                           |\n");
     printf("         |          P%d               |\n",temp->ProcessId);  //print process id of relavant memory portions
     printf("         |                           |\n");
     printf("    %4dK -----------------------------\n",temp->EndMem_Size); //print the memory size of relavant memor portions
    }

    temp = temp->next; //moving pointers to going forward until the last node of Linked List
  }
}



int main()
{
   int mem,OS,option,n,id1,id2; /*creating variables -
   int mem-> store Memory size , int OS- store Operating Sstem Memory Size , int option- Store user choice, int n,id1,id2 are 
   using for passing arguments to relavant functions like Allocattion, DeAllocation*/
   printf("\n\n ***********************************MEMORY ALLOCATION & DEALLOCATION PROGRAM*********************\n\n");  //printing topic of program
   printf("\nEnter the size of Memory(K) :");  //get user inputs
   scanf("%d", &mem);  //store user inputs
   printf("\nEnter Memory size of Operating System(K) :");  //get user inputs
   scanf("%d", &OS);  //store user inputs
   
   struct node *newnode = (struct node*)malloc (sizeof(struct node));  //allocate newnode and set its data
   head=newnode;
   head->EndMem_Size=OS;
   head->ProcessId = -1;

   if((head->EndMem_Size)>0)
   {
      head->IsFree=false;
   }
   else
   {
     head->IsFree=true;
   }
   

   head->next =(struct node*)malloc (sizeof(struct node)); //allocate head_>next and set its data
   head->next->EndMem_Size = mem;
   head->next->ProcessId =-2;

   if((head->next->EndMem_Size) - (head->EndMem_Size) >= 0) //After allocation of OS Memory size,cheching the  Full Memory has free memor spaces
   {
       head->next->IsFree=true;
   }
   else
   {
       head->next->IsFree = false;
   }
   

   head->next->next=NULL;


   if((head->EndMem_Size) <= (head->next->EndMem_Size)) //check whether OS memory size is rather than or equial to Full memory size
   {
     printf("\nInitial View Of Memory....\n\n"); //printing initial view of the memory
     Display();
   }
   else
   {
       printf("\nInvalid....\n\n");  
   }

  do{
  printf("\n\n********Main Menu**********\n\n");  //print main menu for getting user requirements
  printf(" 1. Allocate Memory :- \n");  
  printf(" 2. Terminate Memory :- \n");
  printf(" 3. Show current snapshot of the memory :- \n");
  printf(" 4. Exit the program :- \n");

  printf("\n\n Enter your choice (1/2/3/4) :  ");  // get user inputs
  scanf("%d", &option); //store given user inputs
  
  switch(option)
  {
    case 1:
    printf("\nInput the ProcessID( 1/2/3 like these) : P"); //get user inputs
    scanf("%d", &id1); //store given user inputs
    printf("\nEnter relavent memory size (K): ");  //get user inputs
    scanf("%d", &n); //store given user inputs
    Allocation(id1,n); //calling function Allocation
     
    break;

    case 2:
    printf("\nInput the ProcessID : P"); //get user input
    scanf("%d", &id2); //store given user inputs
    DeAllocation(id2); //calling function DeAllocation
    break;

    case 3:
    Display(); //calling function Display
    break;

    case 4:
    printf("\nEnd the Program.........");
    exit; //Exit the program
    break;

    default:
    printf("\nInvalid choice! Please enter correct choice.\n");  //if user given noumber without mention in the main menu, then given message to user invalid choice
    break;
  }
  }while(option!=4); //checking user requirenments until the user want to exit of the program

return 0;
}