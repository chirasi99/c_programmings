#include<stdio.h>
#include<string.h>


typedef struct {
    
    char name[30];
    int salary;
    int hours;
}Employee;


void main()
{
   
    Employee emp[10];

    char stnam[30];
    

    for (int i = 0; i < 10; i++)
    {
      
      printf("Enter Employee %d name : ", i + 1);
      scanf("%[^\n]",stnam);
      strcpy(emp[i].name, stnam);
      printf("Enter Employee %d salary : ", i + 1);
      scanf("%d", &emp[i].salary);
      printf("Enter Employee %d hours of work per day : ", i + 1);
      scanf("%d", &emp[i].hours);
      getchar();
      printf("\n\n");
  }

  for (int i = 0; i < 10; i++)
    {
        
       if(emp[i].hours>=8 && emp[i].hours<10)
       {
           emp[i].salary = emp[i].salary + 500;
       }
       else if(emp[i].hours>=10 && emp[i].hours<12)
       {
          emp[i].salary = emp[i].salary + 1000;
       }
       else if(emp[i].hours>=12)
       {
         emp[i].salary = emp[i].salary + 1500;
       }
  }

  for (int i = 0; i < 10; i++)
    {
        
        printf("Employee %d name : %s\n",i+1,emp[i].name);
        printf("Employee %d final salary : %d", i+1,emp[i].salary);

        printf("\n\n");
  }
  

}
