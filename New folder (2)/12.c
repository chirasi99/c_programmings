#include<stdio.h>   //Input/Output functions
#include<stdlib.h>  //General utility functions[exit]

#define MAX 100 //define maximum size of circular Queue as 100

int CQ[MAX]; //getting circular Queue to implementation
int front=0; //initialization integer front variable as 0
int rear=0; //initialization integer rear variable as 0
int n;  //getting integer n variable 
int i=1; //initialization integer i variable as 1
int id; //getting integer id variable
int j; //getting integer j variable
int count=0; //initialization integer count variable as 0

int AddCustomer() //creating AddCustomer function without contains any parameters [Adding customer to the shop]
{
  int j;
  if(count<n) //check whether all chairs are booked
  {
  printf("\nEnter Customer ID : S");  //get user inputs
  scanf("%d", &id);  //store given user inputs
  CQ[rear]=id;   //Adding user inputs to the circular Queue
  rear=(rear+1)%n; 
  count++;
  if(count==1) //check the First customer 
  {
     printf("Barber is asleep, but the Customer wakes the barber and gets started  hair cutting.....\n\n");
  } 
  }
 else //check the nubmer of customers in the shop greater the all of booked chairs
  {
    printf("All Seats are fully loaded..Customer have to leave.....\n\n");
  }
  printf("\n\n"); //leaving a spaces for get clear output

}


int StopHaircut() //creating StopHaircut function without contains any parameters[stop hair cutting]
{
     if(count==0)
     {
        printf("There is no customers in shop and barber is sleeping...\n\n");
     }
    else{
        printf("Customer ID S%d was finished her/his hair cutting....\n\n",CQ[front]);
        front=(front+1)%n;
        count--;
        if(count==0)
        {
          printf("There is no customers in shop and barber goes to sleep...\n\n");
        }
        return 1;
    }
  printf("\n\n");   //leaving a spaces for get clear output 
}


void FreeSeat() //creating FreeSeat function without contains any parameters[Show free chairs in the shop]
{
  j = count;
  if (n - j > 0)
  {
    printf("\n ---Free chairs in waiting room---\n");
    for (i =j+1; i<=n; i++)
    {
      printf("    Chair-%d is Free available\n",i);
    }
     }
     else
     {
       printf("No chairs Free available...\n");
     }
  printf("\n\n"); //leaving a spaces for get clear output
}


void ShowWatingRoom() //creating ShowWatingRoom function without contains any parameters[Show waiting room in the shop]
{
  j = count;
  for (i=2; i<=j; i++ )
  {
    printf("Chair- %d is already booked\n", i);
  }
  FreeSeat();
  printf("\n\n"); //leaving a spaces for get clear output
}


void AllCustomer() //creating AllCustomer function without contains any parameters [Show all customer in the shop at that time]
{
  if(count==0)
  {
      printf("No customers in the shop and barber goes sleeping\n\n");
  }
  else
  {
      j=count;
      
      for(i=front;j!=0;j--)
      {
        if(i==front)
        {
        printf("\nCustomer ID S%d is in barber room chair\n",CQ[i]);
        }
        else
        {
         printf("Customer ID S%d is in wating room chair\n",CQ[i]);
        }

       i=(i+1)%n;
     }
     
  }
  printf("\n\n"); //leaving a spaces for get clear output
}

int main()
{
   int num; //getting integer variable as num
   printf("\n\n__________Beginning of the Program______________\n\n"); //begin of the program
    printf("\n\nEnter numbers of chairs(n) in barber shop : "); //getting user inputs
    scanf("%d", &n); //store given user inputs

 do{
    printf("*********Main Menu*******\n\n");  //printing Menu items to users for giving their choices
    printf("1.Add customer to barber shop :\n");
    printf("2.Stop customer's hair cutting :\n");
    printf("3.Show all customers in the shop: \n");
    printf("4.Show number of free seats :\n");
    printf("5.Show waiting room : \n");
    printf("6.Exit the program :\n");

    printf("\n\tEnter your choice as number : "); //getting user input
    scanf("%d", &num); //store given user inputs
    printf("\n\n");  //leaving a spaces for get clear output

    switch(num) 
    {
        case 1:
         AddCustomer(); //calling AddCustomer function
         break;

         case 2:
         StopHaircut(); //calling StopHaircut function
         break;

        case 3:
        AllCustomer(); //calling AllCustomer function
        break;

        case 4:
        FreeSeat(); //calling FreeSeat function
        break;

        case 5:
        ShowWatingRoom(); //calling ShowWatingRoom function
        break;

        case 6:
        printf("End of the Program.....\n\n");
        exit; //exit the program
        break;
        
        default:
        printf("Invalid choice!! Please enter correct choice.\n\n"); //if user given noumber without mention in the main menu, then given message to user invalid choice
        break;
    }
 } while (num != 6); //checking user requirenments until the user want to exit of the program

 return 0;
}
