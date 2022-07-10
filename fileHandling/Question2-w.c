#include<stdio.h>
#include<stdlib.h>

struct Employee{
    char EmpNo[20];
    char EmpName[50];
    float salary;
    int OTHours;
};

int main()
{
    int i;
    struct Employee emp1;
    FILE *fpointer;
    
    fpointer = fopen("Data.txt", "w");
    
    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }

    else
    {
    for (i = 0; i <4;i++)
    {

        printf("\nEnter Employee Name : ");
        scanf("%s", emp1.EmpName);

        printf("Enter Employee No : ");
        scanf("%s", emp1.EmpNo);

        printf("Enter Employee Salary : ");
        scanf("%f", &emp1.salary);

        printf("Enter Employee OT hours : ");
        scanf("%d", &emp1.OTHours);

        fprintf(fpointer,"%-10s \t\t %s \t %0.2f \t %d  \n",emp1.EmpName,emp1.EmpNo,emp1.salary,emp1.OTHours);
    }
    }
    fclose(fpointer);
    return 0;
}