#include<stdio.h>
#include<string.h>

struct Product{
    char name[30];
    float price;

} apple, orange;
void main()
{
    strcpy(apple.name, "Apple");
    apple.price = 23.50;
    printf("Product name : %s\n", apple.name);
    printf("Product price : %f\n", apple.price);
    

}