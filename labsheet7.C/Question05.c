#include<stdio.h>

int main()
{
   int n,ph,ch,co;
   char name[50];

    printf("Enter ID number of the student : ");
    scanf("%d", &n);

    printf("Enter name of the student : ");
    scanf("%s", &name);

    printf("Enter marks in Physics , Chemistry , Computer Application : ");
    scanf("%d %d %d ", &ph, &ch , &co);

    int tot =ph+ch+co;
    float pec=tot*100/300;

    printf("ID : %d \n", n);
    printf("Name of the student : %s \n", name);
    printf("Marks in Physics : %d \n", ph);
    printf("Marks in Chemistry : %d \n", ch);
    printf("Marks in Computer Appication : %d \n", co);
    printf("Total Marks = %d \n", tot);
    printf("Percentage =  %.2f\n", pec);

}