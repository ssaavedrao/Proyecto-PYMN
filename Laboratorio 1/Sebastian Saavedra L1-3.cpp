#include<stdio.h>
#include<math.h>
int main ()
{
	char nombre [10]; 
	float peso, IMC, p2, estatura ;
	int edad;
	printf("Ingresa tu nombre sin apellidos ");
	scanf("%s", &nombre);
	printf("Ingresa tu edad ");
	scanf("%d", &edad);
	printf("Ingresa tu peso ");
	scanf("%f", &peso);
	printf("Ingresa tu estatura ");
	scanf("%f", &estatura);
	p2= pow(estatura, 2);
	IMC= (peso / p2);
	printf ("%s\n", nombre);
	printf ("Edad %d\n ", edad);
	printf ("peso %f\n ", peso);
	printf("Tu indice de masa corporal es de %f\n ", IMC);
	return 0;
}
