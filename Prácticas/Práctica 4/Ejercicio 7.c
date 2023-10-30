//Ejercicio 7

#include<stdio.h>
#include<string.h>
#define N 15

void numeros_vector(int[], int);

int main()
{
	int v[N];
	int a,i;
	
	for(i=0;i<N;i++)
	{
		printf("Introduce un valor para la posicion %i del vector:\n", i+1);
		scanf("%i", &v[i]);
	}
	do
	{
		printf("Introduce un valor para el vector:\n");
		scanf("%i", &a);
		
	} while (a<0);
	return 0;
}

