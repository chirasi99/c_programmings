#include <stdio.h>
#include <stdlib.h>
void binary_number(int n)
{
int bin_num[1000];
int i = 0;
while (n > 0) {
bin_num[i] = n % 2;
n = n / 2;
i++;
}

for (int j = i - 1; j >= 0; j--)
printf("%d",bin_num[j]);
printf("\n");
}
void generation(int n)
{
for(int i = 0; i<= n; i++)
{
   binary_number(i);
}
}
int main()
{
int n;
printf("Enter the end value : ");
scanf("%d",&n);
printf("\nBinary numbers from 1 to %d \n: ",n);
generation(n);
}