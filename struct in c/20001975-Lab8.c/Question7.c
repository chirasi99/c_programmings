#include<stdio.h>

struct DATE
{
    int dd;
    int mm;
    int yy;
} d1, d2;

int main()
{
    printf("Enter YEAR Of Frist Date : ");
    scanf("%d", &d1.yy);
    printf("Enter MONTH Of Frist Date : ");
    scanf("%d", &d1.mm);
    printf("Enter DATE Of Frist Date : ");
    scanf("%d", &d1.dd);

    printf("\n\n");

    printf("Enter YEAR Of Second Date : ");
    scanf("%d", &d2.yy);
    printf("Enter MONTH Of Second Date : ");
    scanf("%d", &d2.mm);
    printf("Enter DATE Of Second Date : ");
    scanf("%d", &d2.dd);


    if(d1.mm<1 || d1.mm>12)
    {
        printf("\nInvalid month of first date..please enter correct month and try again..\n");
    }

    else if(d2.mm<1 || d1.mm>12)
    {
        printf("\nInvalid month of second date..please enter correct month and try again..\n");

    }

    else if(d1.mm==2 || d2.mm==2)
    {
         if (((d1.yy%4==0 && d1.yy%100!=0)||(d1.yy%400==0)) || ((d2.yy%4==0 && d2.yy%100!=0)||(d2.yy%400==0)))
        {
          if(d1.dd<1 || d1.dd>29)
          {
           printf("\nInvalid date of first date..please enter correct date and try again..\n");
          }
           else if(d2.dd<1 || d2.dd>29)
           {
          printf("\nInvalid date of second date..please enter correct date and try again..\n");  
          }
        }
        else
       {

        if(d1.dd<1 || d1.dd>28)
        {
        printf("\nInvalid date of first date..please enter correct date and try again..\n");
        }
        else if(d2.dd<1 || d2.dd>28)
        {
        printf("\nInvalid date of second date..please enter correct date and try again..\n");  
        }
      }
    }

    else if(d1.mm==4|| d1.mm==6 || d1.mm==9 || d1.mm==11 || d2.mm==4|| d2.mm==6 || d2.mm==9 || d2.mm==11)
    {
       if(d1.dd<1 || d1.dd>30)
        {
        printf("\nInvalid date of first date..please enter correct date and try again..\n");
        }
        else if(d2.dd<1 || d2.dd>30)
        {
        printf("\nInvalid date of second date..please enter correct date and try again..\n");  
        }
    }



    if(d1.dd==d2.dd && d1.mm==d2.mm && d1.yy==d2.yy)
    {
        printf("\nDates are EQUAL...\n");
    }
    else
    {
        printf("\nDates are not EQUAL...\n");
    }
    

    
}