#include<stdio.h>
#include<string.h>

typedef struct {
    char name[30];
    int accNo;
    float balance;
}BankAccount;

int num,count=0;

BankAccount ac[100];

void BalanceLess200()
{
    printf("\n\n Names of all customers having balance less than Rs.200.\n");
    for (int i = 0; i <num;i++)
 {
     if(ac[i].balance<200)
     {
         printf("Customer no%d Name : %s\n", i + 1, ac[i].name);
     }
     else
     {
         count++;
     }
 } 
 if(count==num)
 {
     printf("\nNo Customers having their balance less than Rs.200.\n");
 }

}

void BalanceAddCus()
{
    printf("New balance of customer who has more than current balance Rs.1000..\n\n");
    for (int i = 0; i < num;i++)
 {
     if(ac[i].balance>1000)
     {
        ac[i].balance = ac[i].balance + 100;
        printf("Customer no%d Name : %s\n", i + 1, ac[i].name);
        printf("Customer no%d New balance : %.2f\n", i + 1, ac[i].balance);
     }
     else
     {
         count++;
     }
 } 
 if(count==num)
 {
     printf("\nNo Customers having their balance more than Rs.1000.\n");
 }

}


int main()
{
    int option;
    char name[30];
   printf("Enter Number of Customers in the bank : ");
   scanf("%d", &num);

   for (int i = 0; i <num; i++)
   {
       getchar();
       printf("Enter Customer No%d name : ", i + 1);
       scanf("%[^\n]s", name);
       strcpy(ac[i].name, name);
       printf("Enter Customer No%d Account Number : ", i + 1);
       scanf("%d", &ac[i].accNo);
       printf("Enter Customer No%d Account Balance : ", i + 1);
       scanf("%f", &ac[i].balance);
       

       printf("\n\n");
 }

    BalanceLess200();
    printf("\n\n");
    BalanceAddCus();
}
  