#include <stdio.h>
int main()
{	
	int n, bin[400];
    int i = 0;
    printf("Ingresa un numero ");
    scanf("%d",&n);	
    while (n != 0)
    {
          bin[i] = n % 2;
          n = n / 2;
          i++;
    }
    i--;   
    while (i>=0)
    {
          printf("%d",bin[i]);
          i--;
    }
	return 0;
}
