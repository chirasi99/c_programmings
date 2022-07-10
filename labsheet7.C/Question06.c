#include<stdio.h>

int main()
{
    int n, m;
    char name[50];
    float x,y,sub;

    printf("Enter Customer ID : ");
    scanf("%d", &n);

    printf("Enetr Customer Name : ");
    scanf("%s", &name);

    printf("Enter the unit consumed by the Customer : ");
    scanf("%d", &m);

    printf("\n\n\n\nElectricity Bill\n");
    printf("Customer IDNO : %d \n",n);
    printf("Customer Name : %s \n", name);
    printf("Unit Consumed : %d \n", m);

    if(m>=600)
    {
        x= m*2.00;
        printf("Amount charges @2.00 per unit : %0.2f", x);
    }
    else if(m>=400 && m<600)
    {
       x= m*1.80;
        printf("Amount charges @1.80 per unit : %0.2f", x);
    }
    else if(m>=200 && m<400)
    {
        x =m*1.50;
        printf("Amount charges @1.50 per unit : %0.2f", x);
    }
    else if(m<=199)
    {
        x=m*1.20;
        printf("Amount charges @1.20 per unit : %0.2f", x);
    }
    
    printf("\n");

    if(x>=400)
    {
       y= x*15/100;
       printf("Surchage Amount : %0.2f\n", y);

    }

    sub = x+y;

    if(sub<=100)
    {
        printf("Net Amount Paid By the Customer : 100.00\n");
    }
    else
    {
       printf("Net Amount Paid By the Customer : %0.2f\n", sub);
    }


}