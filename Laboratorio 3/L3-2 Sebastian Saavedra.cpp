#include <stdio.h>
int a,b,c;
int main ()
{
	b=1960;
	do {
	printf("Ingrese el codigo ");
	scanf("%d", &a);
	if (a==b)
	{
		printf("Codigo valido ");
	}
    else
	{
	    printf("Codigo invalido\n ");
    }
    }while(a!=b);
}
