#include<stdio.h>
int main ()
{
	int i,a,b=0,c=1,d=1;
	printf("Ingrese el numero ");
	scanf("%d", &a);
	printf("1 ");
	for (i=1;i<a;i++)
	{
		d=b+c;
		printf("%d",d);
		printf(" ");
		b=c;
		c=d;
	}
	return 0;
}
