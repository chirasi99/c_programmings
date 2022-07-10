#include <stdio.h>
int main ()
{
	
char u, v = 'A';
char *pu, *pv = &v;

*pv = v + 1;
u = *pv + 1;
pu = &u;


printf("value represented by &v: %d\n", &v );
printf("value stored in v: %c\n", v );
printf("value assigned to pv variable: %d\n", pv );
printf("value represented by  *pv variable: %c\n", *pv );

printf("\n\n");

printf("value stored in u: %c\n", u );
printf("value represented by &u: %d\n", &u );
printf("value assigned to pu variable: %d\n", pu );
printf("value represented by  *pu variable: %c\n", *pu );

}
