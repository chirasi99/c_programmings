#include<stdio.h>
int main()
{
    int a[3]={5,4,4};
    int i,found,location,count = 0;

    for(int i=0;i<3;i++)
    {
        if(a[i]==4)
        {
           found=1;
           location= i;
           count = count +1;
           
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
        printf("How many positions of your searching element is in : %d",count);
    }


    return 0;
}
