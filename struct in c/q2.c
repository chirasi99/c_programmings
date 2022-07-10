#include<stdio.h>
#include<string.h>

typedef struct {
    char name[30];
    float price;
} Product;

void main()
{
    Product apple, orange;
    strcpy(apple.name, "Apple");
    apple.price = 23.50;
    printf("Product name : %s\n", apple.name);
    printf("Product price : %0.2f\n", apple.price);
    


}