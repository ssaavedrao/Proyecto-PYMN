#include<stdio.h>
#include<math.h>
int main ()
{
	float peso, estatura, imc;
	printf("Ingrese su peso en kilogramos\n ");
	scanf("%f", &peso);
	printf("Ingrese su estatura en metros ");
	scanf("%f", &estatura);
	imc= peso / pow(estatura,2);
	if (imc < 18.5)
	{
		printf("Peso bajo ");
	}
	else if (imc>18.5 && imc<24.9 )
	{
		printf("Peso normal ");
	}
	else if (imc>25 && imc<29.9 )
	{
		printf("Sobre peso");
	}
	else if (imc>30 && imc <34.9)
	{
		printf("Obesidad tipo 1");
	}
	else if (imc>35 && imc< 39.9)
	{
		printf("Obesidad tipo 2");
	}
	else if (imc>40)
	{
		printf("Hiper obesidad ");
	}
	return 0;
}
