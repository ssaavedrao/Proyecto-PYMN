#include <iostream>
using namespace std;
int main()
{

int edad;
printf ("Cual es tu edad\n");
scanf("%d", &edad);
if (edad < 18 )
{
	printf("Eres menor de edad ");
}
else {
printf("Eres mayor de edad");
}
return 0;
}
