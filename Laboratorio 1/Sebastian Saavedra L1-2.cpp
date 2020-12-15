#include<stdio.h>
#define g 9.8 
int main ()
{
float masa,w ;
printf("Ingrese la masa ");
scanf("%f", &masa);
w=(g*masa);
printf("La fuerza de atraccion de una persona es de %f", w);
return 0;
}
