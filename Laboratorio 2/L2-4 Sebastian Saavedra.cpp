#include <stdio.h>
int main ()
{
	float a,b,c,d,e,f,g;
	printf("1- Soltero\n 2-Casado\n ");
	scanf("%f", &a);
	if (a==1)
	{
		printf("Ingrese su taza mensual ");
		scanf("%f", &b);
		if(b<32000)
		{ 
            c = (b*.10);
			printf("Su taza mensual es %f ", c);
			return 0;
		}
		else
		{
			d=(b*.25);
			printf("Su taza mensual es %f ", d);
		}
	}
	else
	{
		printf("Ingrese su taza mensual ");
		scanf("%f", &g);
		if (b<64000)
		{ 
            e = (g*.10);
			printf("Su taza mensual es %f ", e);
		}
		else
		{
			f=(g*.25);
			printf("Su taza mensual es %f ", f);
		}
	}
	return 0;
}
