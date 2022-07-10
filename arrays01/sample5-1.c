#include<stdio.h>
int main()
{
    int a[3]={5,4,8};
    int i,found,location;

    for(int i=0;i<3;i++)
    {
        if(a[i]==4)
        {
           found=1;
           location = i;
           break;
        }
        else
        {
          found = 0;
        }
    }

    if (found==0)
    {
         printf("sry,Your search is unsuccessful\n");
    }
    else{
        printf("Your search is successful\n");
        printf("position of your searching element is :Element [%d]",location);
    }


    return 0;
}


