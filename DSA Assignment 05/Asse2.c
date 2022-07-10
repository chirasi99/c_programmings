#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100


int CQ[MAX];
int front=0;
int rear=0;
int n;
int i=1;
int id;
int j;
int count =0;

int AddCustomer()
{
  
  int j;
  count++;
  if(count>=n)
  {
  printf("\nEnter Customer ID : S ");
  scanf("%d", &id);
  CQ[rear]=id;
  rear=(rear+1)%MAX;

  if(count=1)
  {
     rear++;
     printf("Barber is asleep, but the Customer wakes the barber and gets a hair cutting.....\n\n",CQ[rear]);
     return 1;
  }
  else if(rear>=1 && count>1)
  {
    printf("Customer ID S%d get in to hair cutting...\n\n",CQ[rear]);
    return 1;
  }
  else 
  {
    printf("Customer ID S%d in a wating room....\n\n",CQ[rear]);
  }
  
  }
 else
{
    printf("Seats are full.So,Customer have to leave.....\n\n");
}
  
}

int StopHaircut()
{
     int id1;
     if(count==0)
     {
        printf("There is no customers in shop and barber is sleeping...\n\n");
     }
    else{
        printf("Customer ID S%d was finished her/his hair cutting....\n\n",CQ[front]);
        front=(front+1)%MAX;
        return 1;
    }
     
}

/*void CalTime()
{
    
    printf("\nEnter Customer ID : S ");
    scanf("%d", &id2);
    if(id2!=id1)
    {
      if(ShowWatingRoom(id2))
      {
          printf("Customer is still in the waiting room....\n");
      }
      else
      {
          printf("Customer was leave......");
      }
    }
    else
  {   
    time_t start,end;
    start = time(Add_WatingList());
    end = time(StopHairCut());
    printf("Time taken to hair cutting Customer ID S%d : ",arr[i],difftime(end,start));
  }
}

void FreeSeat()
{
    
    for(i=1;i<=n;i++)
    {
    if(arr[i]==NULL)
    {
        printf("C[%d] - FREE ",i);
    }
    }
}

int ShowWatingRoom()
{
 for(rear=2;rear=NULL;rea++)
}
*/
void AllCustomer()
{
  if(count==0)
  {
      printf("No customers in the shop and barber is sleeping..\n\n");
  }
  else
  {
      j=count;
      
      for(i=front;j!=0;j--)
      {
        if(i==front)
        {
        printf(" S%d - barber room chair\n\n",CQ[i]);
        }
        else
        {
         printf("S%d - wating room chair",CQ[i]);
        }
        
       i=(i+1)%MAX;
     }
  }
  
}

int main()
{
   int n,num;
    printf("\n\nEnter numbers of chairs(n) in barber shop : ");
    scanf("%d", &n);

 do{
    printf("*********Main Menu*******\n\n");
    printf("1.Add customer to barber shop :\n");
    printf("2.Stop customer's hair cutting :\n");
   // printf("3.Calculating customers hair cutting time :\n");
   // printf("4.Show number of free seats :\n");
   // printf("5.Show waiting room : \n");
    printf("3.Show all customers in the shop: \n");
    printf("4.Exit the program :\n");

    printf("__________Beginning of the Program______________\n\n");
    printf("Enter your choice : ");
    scanf("%d", &num);
   
    switch(num){
        case 1:
         AddCustomer();
         break;

         case 2:
         StopHaircut();
         break;

        case 3:
        AllCustomer();
        break;

        default:
        printf("End the Program.....\n\n");
        exit;
    }
 }while(num!=4); 
    
return 0;

}