#include <stdio.h>
#include <math.h>
#define PI 3.1416
#define C 1.3333
int main ()
{
	float radio, volumen, R, V;
	printf("Ingrese el radio de la esfera ");
	scanf("%f", &radio);
	R=pow(radio, 3);
	V= ( C * PI)* (R);
	printf("E l volumen es de %f metros cubicos ", V);
	return 0;
}

