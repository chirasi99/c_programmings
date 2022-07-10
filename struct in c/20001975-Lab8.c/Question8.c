#include<stdio.h>

struct DATE
{
    int dd;
    int mm;
    int yy;
} d1, d2;

int main()
{
    int x,y;
    printf("Enter YEAR Of Frist Date : ");
    scanf("%d", &d1.yy);
    printf("Enter MONTH Of Frist Date : ");
    scanf("%d", &d1.mm);
    printf("Enter DATE Of Frist Date : ");
    scanf("%d", &d1.dd);

    printf("CURRENT DATE :-  year - %d     month - %d    date - %d   \n", d1.yy, d1.mm, d1.dd);
    printf("\nAfter Adding 45 Days........\n\n");

    
    if(d1.mm==4 || d1.mm==6 || d1.mm==9)
    {
        d1.mm = d1.mm + 1;
        x = 45-(30 - d1.dd);
        if(x>31)
        {
            d1.mm++;
            y = x - 31;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
    }
    else if(d1.mm==2)
    {
        if((d1.yy%4==0 && d1.yy%100!=0)||(d1.yy%400==0))
        {
            d1.mm++;
            x = 45-(29 - d1.dd);
            if(x>31)
            {
                d1.mm++;
                y = x - 31;
                d1.dd = y;
            }
            else
            {
                d1.dd = y;
            }
        }
        else
        {
            d1.mm++;
            x =45-(28 - d1.dd);
            if(x>31)
            {
                d1.mm++;
                y = x - 31;
                d1.dd = y;
            }
            else
            {
                d1.dd = y;
            }
        }
    }

    else if(d1.mm==3 || d1.mm==5 || d1.mm==8 || d1.mm==10)
    {
       d1.mm = d1.mm + 1;
        x = 45-(31 - d1.dd);
        if(x>30)
        {
            d1.mm++;
            y = x - 30;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
    }
    else if(d1.mm==1)
    {
        if((d1.yy%4==0 && d1.yy%100!=0)||(d1.yy%400==0))
        {
        d1.mm = d1.mm + 1;
        x = 45-(31 - d1.dd);
        if(x>29)
        {
            d1.mm++;
            y = x - 29;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
        }
        else
        {
          d1.mm = d1.mm + 1;
          x =45-(31 - d1.dd);
        if(x>28)
        {
            d1.mm++;
            y = x - 28;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
       }
        
    }
    else if(d1.mm==12)
    {
        d1.mm = 1;
        d1.yy++;
        x = 45-(31 - d1.dd);
        if(x>31)
        {
            d1.mm++;
            y = x - 31;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
    }

    else if(d1.mm==11)
    {
        d1.mm ++;
        x = 45-(30 - d1.dd);
        if(x>31)
        {
            d1.mm=1;
            d1.yy++;
            y = x - 31;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        }
    }

    else
    {
       d1.mm = d1.mm + 1;
        x = 45-(31 - d1.dd);
        if(x>31)
        {
            d1.mm++;
            y = x - 31;
            d1.dd = y;
        }
        else
        {
            d1.dd = x;
        } 
    }

    printf("NEW DATE :-  year - %d     month - %d    date - %d   \n", d1.yy, d1.mm, d1.dd);
}