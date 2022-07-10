#include<stdio.h>
#include<stdlib.h>

struct Member{
    int IDno;
    int annual_income;
    int NoOfMem; 
};

int main()
{
    int i,n;
    struct Member mem1;
    FILE *fpointer;
    
    fpointer = fopen("readme.txt", "w");
    
    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }

    else
    {
        printf("Enter Number of ID nos : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {

            printf("\nEnter Member Identification Number : ");
            scanf("%d", &mem1.IDno);

            printf("Enter Member Annual Income : ");
            scanf("%d", &mem1.annual_income);

            printf("Enter Number of Members : ");
            scanf("%d", &mem1.NoOfMem);
            
            fprintf(fpointer, "%8d \t %8d \t    %8d  \n", mem1.IDno, mem1.annual_income, mem1.annual_income);
    }
    }
    fclose(fpointer);
    return 0;
}