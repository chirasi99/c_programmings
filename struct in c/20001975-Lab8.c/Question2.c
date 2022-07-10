#include<stdio.h>


typedef struct {
    float Dis1;
    float Dis2;
}Distance;


void main()
{
    Distance D;

        printf("Enter Distance of first place(inch-feet) : ");
        scanf("%f", &D.Dis1);
        printf("Enter Distance of second place(inch-feet) : ");
        scanf("%f", &D.Dis2);
        
      printf("\n\nSUM of two distances : %f  \n", (D.Dis1+D.Dis2));
}