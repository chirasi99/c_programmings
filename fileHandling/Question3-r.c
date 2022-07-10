#include<stdio.h>
#include<stdlib.h>

struct Member{
    int IDno;
    int annual_income;
    int NoOfMem;
};

struct Member mem1;
int tot = 0;
int count = 0;
int arr1[10],arr2[10],j;
int sum;
int a = 0;

int Average()
{
        int avg = tot / sum;
        printf("\nAverage household income of the town : %d \n",avg );
}

int Total()
{
  printf("Total number of members in the town : %d\n", sum);
}

int Median()
 {
    int med = sum / 2;
    for (j = 0; j<=count;j++)
    {
        if(arr1[j]>=med)
        {
            printf("Median Annual Income %d \n\n", arr2[j]);
            break;
        }
    }
} 

int main()
{
    FILE *fpointer;
    
    fpointer = fopen("readme.txt", "r");
    
    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }
    printf("ID Number     Annual Income     No Of Member     X[i-1]+X[i] \n\n");
    while (!feof(fpointer))
    {
        fscanf(fpointer, "%d %d %d ", &mem1.IDno, &mem1.annual_income, &mem1.NoOfMem);
        a = a + mem1.NoOfMem;
        arr1[j] = a;
        arr2[j] = mem1.annual_income;
        sum = sum + mem1.NoOfMem;
        tot = tot + mem1.annual_income * mem1.NoOfMem;
        printf("%-8d \t %-8d \t %-8d \t %d \n", mem1.IDno, mem1.annual_income, mem1.NoOfMem, arr1[j]);
        j++;
        count++;
        }
        Average();
        Total();
        Median();
        
        fclose(fpointer);
        return 0;
    }