#include<stdio.h>
#include<string.h>

#define MAX 5

typedef struct {
    int id;
    char name[20];
    float chemMarks;
    float phyMarks;
    float mathsMarks;
}Student;


void main()
{
   
    Student std[5];

    char stnam[20];
    float pec[8];

    for (int i = 0; i < MAX; i++)
    {
        printf("Enter Student %d ID : ",i+1);
        scanf("%d", &std[i].id);
        printf("Enter Student %d name : ",i+1);
        scanf("%s", stnam);
        strcpy(std[i].name, stnam);
        printf("Enter Student %d Chemistry Marks : ", i + 1);
        scanf("%f", &std[i].chemMarks);
        printf("Enter Student %d  Physics Marks : ", i + 1);
        scanf("%f", &std[i].phyMarks);
        printf("Enter Student %d Mathematics Marks : ", i + 1);
        scanf("%f", &std[i].mathsMarks);
        pec[i] = ((std[i].chemMarks) + (std[i].phyMarks) + (std[i].mathsMarks)) / 3;

        printf("\n\n");
  }
  
  printf("\n\n\nPercentage marks of 5 students ...........\n\n");
  for (int i = 0; i < MAX; i++)
  {
      printf("Student %d ID : %d \n", i + 1,std[i].id);
      printf("Student %d name : %s \n", i + 1,std[i].name);
      printf("Student Subjects che  Percentage Marks:%.2f \n", std[i].chemMarks);
      printf("Student Subjects phy Percentage Marks:%.2f \n", std[i].phyMarks);
      printf("Student Subjects maths Percentage Marks:%.2f \n", std[i].mathsMarks);
      printf("Student Subjects Percentage Marks:%.2f \n", pec[i]);

      printf("\n\n");
  }
}

