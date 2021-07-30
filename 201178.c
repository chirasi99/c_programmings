#include<stdio.h>  // create header file as stdio.h 

int main()
{
    int arr[10][2] = {{5000,0},{1000,0},{500,0},{100,0},{50,0},{20,0},{10,0},{5,0},{2,0},{1,0}};   //create 2-D array named as arr[10][2]. 
    int p,i,n,div_salary,salary,Total_salary=0;     // create variables.
    char name[10];  // create char array named as name for store charactors.
     
    
    printf("\n\nEnter number of employees in the organization : ");      // Get number of employees in the organinzation from the user.
    scanf("%d", &n);                                                  // store number of employees in int variable n.

    for(p=0;p<n;p++)
 {
    printf("\nEnter the name of employee : ");          // Get the name of employee from the user.
    scanf("%s", &name);                        // store name of employee in int char name[10] array.

    printf("\nEnter the salary of employee : ");         // Get the salary of employee from the user.
    scanf("%d", &salary);                          // store salary of employee in int variable salary.
    

    printf("\n\noutput\n");    //print output
    
    printf("Name of employee : %s\n",name);                                   // print employee name.
    printf("Salary of employee : %d\n", salary);                             //print saraly of employee.
    printf("Coin analysis : \n");                                             // print coin analysis.

    Total_salary = Total_salary + salary;  //find total salary of all empolyees.

    i=0;   //initialization of i variable 
    while (salary>0)    // coin analysis
    {
      div_salary= salary/arr[i][0];  
       
      if(div_salary>0)
      { 
       printf("Rs %d  : %d\n", arr[i][0],div_salary);           //print  each coins values according to salary.
       salary=salary%arr[i][0];                     // get reminder for further calculations
       arr[i][1]= arr[i][1]+div_salary;                // count each coin values
      }   

      i++;  // increasing value of i
    }

    printf("\n\n");        // leave spaces for get clear output
      
 }
   
    printf("\n\n\nSummary:\n\n");     // print summery 

    printf("CHIRASI AMAYA Oraganization(chirasiamaya99@gmail.com)\n\n");  //print organization name and email address
   
    printf("Total Salary : %d \n", Total_salary);     // print total salary of all employees
   
    for(i=0;i<10;i++)   //print count values of each coins
    {
       if(arr[i][1]>0)
    {
        printf("Total %ds : %d \n",arr[i][0],arr[i][1]);
    }
    }

 return 0;
}