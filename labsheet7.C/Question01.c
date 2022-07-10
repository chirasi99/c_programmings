#include<stdio.h>
#include<math.h>

int main()
{
   
   float X1, X2, Y1,Y2, val;

   printf("Enter value of X1 : ");
   scanf("%f", &X1);

   printf("Enter value of Y1 : ");
   scanf("%f", &Y1);

   printf("Enter value of X2 : ");
   scanf("%f", &X2);

   printf("Enter value of Y2 : ");
   scanf("%f", &Y2);

   val = (X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1);
   printf("The answer of equation  : %f\n", sqrt(val));
  
   
}