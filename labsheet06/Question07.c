#include <stdio.h>

    void swapx(int *ptr1, int *ptr2);

    void main()
    {
 
        int x[50];
        int i, n;
 
        printf("Number Of Elements in an array: \n");
        scanf("%d", &n);
 
        printf("Enter Elements one by one\n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", x+i);
        }
 
        swapx(x+2, x+3);
        printf("\nSwaped Array\n");
 
        for (i =n-1; i>=0; i--) 
        {
            printf("%d\n", x[i]);
        }

    }
    void swapx(int *ptr1, int *ptr2 ) 
    {
 
        int y;
        y = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = y;
 
    }