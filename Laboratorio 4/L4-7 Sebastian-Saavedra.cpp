#include<stdio.h>
int main ()
{
	int A[4][4];
	int i,j,b,l;
	int suma[4][4];
	int B[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Ingrese un dato ");
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Ingrese un dato de la segunda matriz ");
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			suma[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ", suma[i][j]);
		
		}
			printf("\n");
	}
	return 0;
	}
