#include<stdio.h>
#include<stdlib.h>

struct Student{
    char sturegNo[20];
    char stuName[50];
    int age;
};

int main()
{
    int i;
    struct Student st1;
    FILE *fpointer;
    
    fpointer = fopen("StudDetail.txt", "w");

    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }

    else
    {
     fprintf(fpointer,"\nStRe_No \t St_Name \t\t   St_age \n");
    for (i = 0; i <5;i++)
    {

        printf("\nEnter Student Registration No : ");
        scanf("%s", st1.sturegNo);

        printf("Enter Student Name : ");
        scanf("%s", st1.stuName);

        printf("Enter Student Age : ");
        scanf("%d", &st1.age);

       
        fprintf(fpointer,"%-8s \t %-20s \t\t %-3d \n",st1.sturegNo,st1.stuName,st1.age);
    }
    }
    fclose(fpointer);
    return 0;
}