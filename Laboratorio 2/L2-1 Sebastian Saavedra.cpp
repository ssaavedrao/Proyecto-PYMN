//par o impar
#include<stdio.h>
int numero, residuo;
int main ()
{
	printf("Ingresa un numero ");
	scanf("%d", &numero);
	residuo = numero%2;
	if(residuo==0) {
		printf("El numero es par ");
	}
	else {
		printf("El numero es impar ");
	}
	return 0;
}0
