#include<stdio.h>
#include<stdlib.h>

struct Employee{
    char EmpNo[20];
    char EmpName[50];
    float salary;
    int OTHours;
};
struct Employee emp1;
float tot = 0;
int count = 0;
float net,ot;

void netsal()
{
  ot = emp1.OTHours * 15.00;
  net = emp1.salary + emp1.salary*0.35 + ot;
  printf("%-4s \t\t %-10.2f \t %5.2f \t %-5.2f \n",emp1.EmpNo,emp1.salary,ot,net);
}


int main()
{
    int i;
    FILE *fpointer;
    
    fpointer = fopen("Data.txt", "r");
    
    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }
    fscanf(fpointer, "%s %s %f %d ", emp1.EmpName, emp1.EmpNo, &emp1.salary, &emp1.OTHours);
    printf("Employee No \tBasic Salary \t OT Amount \t Net Salary \n\n");
    while(!feof(fpointer))
    {
        netsal();
        tot = tot + net;
        fscanf(fpointer, "%s %s %f %d", emp1.EmpName, emp1.EmpNo, &emp1.salary, &emp1.OTHours);
    }
    printf("\nTotal Amount of Salaries : %0.2f\n\n", tot);
    
    
    fclose(fpointer);
    return 0;
}