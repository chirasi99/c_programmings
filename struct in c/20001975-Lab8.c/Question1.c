#include<stdio.h>
#include<string.h>

typedef struct {
    int StudID;
    char name[30];
    int age;
    char address[50];
    float marks;
}Student;


void main()
{
   
    Student std[5];

    char stnam[50];
    char stadd[200];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student %d ID : ", i+1);
        scanf("%d", &std[i].StudID);
        getchar();
        printf("Enter Student %d name : ",i+1);
        scanf("%[^\n]s", &stnam);
        strcpy(std[i].name, stnam);
        printf("Enter Student %d Age : ", i+1);
        scanf("%d", &std[i].age);
        getchar();
        printf("Enter Student %d Address : ",i+1);
        scanf("%[^\n]s", stadd);
        strcpy(std[i].address,stadd);
        printf("Enter Student %d Marks : ", i + 1);
        scanf("%f", &std[i].marks);

        printf("\n\n");
  }
  printf("\n\n\nDetails of 5 students ...........\n\n");
  for (int i = 0; i < 5; i++)
  {
      printf("Student %d ID : %d \n", i + 1,std[i].StudID);
      printf("Student %d name : %s\n", i + 1,std[i].name);
      printf("Student %d Age : %d\n", i + 1,std[i].age);
      printf("Student %d Address : %s\n", i + 1,std[i].address);
      printf("Student %d Marks : %f \n", i + 1, std[i].marks);

      printf("\n\n");
  }
}
