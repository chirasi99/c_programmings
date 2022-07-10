#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int StudID;
    char name[30];
    int age;
    char address[50];

} Student;

Student std[100];

int n,count=0;


void GivenID()
{

for (int i = 0; i < n; i++)
  {
      if(std[i].StudID!='\0')
      {
      printf("Student %d ID : %d \n", i + 1,std[i].StudID);
      printf("Student %d name : %s\n", i + 1,std[i].name);
      printf("Student %d Age : %d\n", i + 1,std[i].age);
      printf("Student %d Address : %s\n", i + 1,std[i].address);
      printf("\n\n");
      }
      else
      {
          count++;
      }
  }
   if(count==n)
  {
      printf("\nAll students ID numbers are given.\n");
  }
}


void EvenIdno()
{

for (int i = 0; i < n; i++)
  {
      if(std[i].StudID%2 ==0)
      {
        printf("Student %d name : %s\n", i + 1,std[i].name); 
      }
      else
      {
          count++;
      }
  }
  if(count==n)
  {
      printf("\nThere are no students have even ID number.\n");
  }
}


void Age14()
{
    printf("\nStudents having age 14\n");
   for (int i = 0; i < n; i++)
  {
     if(std[i].age==14)
     {
       printf("Student %d name : %s\n", i + 1,std[i].name);  
     }
     else
     {
         count++;
     }
  }
  if(count==n)
  {
      printf("\nThere are no students in 14 years old.\n");
  }

} 


void main()
{
char stnam[50];
char stadd[200];
int option;

printf("Enter number of students : ");
scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("Enter Student %d ID : ", i+1);
        scanf("%d", &std[i].StudID);
        getchar();
        printf("Enter Student %d name : ",i+1);
        scanf("%[^\n]s", &stnam);
        strcpy(std[i].name, stnam);
        printf("Enter Student %d Age (between 11 to 14) : ", i+1);
        scanf("%d", &std[i].age);
        getchar();
        printf("Enter Student %d Address : ",i+1);
        scanf("%[^\n]s", stadd);
        strcpy(std[i].address,stadd);
        printf("\n\n");
  }

  do{
      printf("\n\n *******************Main Menu***************\n\n");
      printf("1.Show names of students having age 14 : \n");
      printf("2.Show names of students having even ID no : \n");
      printf("3.Show the details of students whose ID no is given : \n");
      printf("4.Exit the program : \n");

      printf("\n\nEnter your choice :");
      scanf("%d", &option);

      switch (option)
      {
      case 1:
          Age14();
          break;

      case 2:
          EvenIdno();
          break;
    
      case 3:
          GivenID();
          break;
          
      case 4 :
          exit;
          break;

          default:
          printf("Invalid choice....please enter correct choice and try again!\n");
          break;
      }
      
  }while(option!=4);
}
