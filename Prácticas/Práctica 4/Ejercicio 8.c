//Ejercicio 8

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 8

void mostrar(int[], int);

int main()
{
	int v[N], i;
	for(i=0;i<N;i++)
	{
		printf("Introduce un valor para la posicion %i del vector:\n", i+1);
		scanf("%i", &v[i]);
	}
	mostrar(v,N);
	return 0;
}

void mostrar(int vec[], int elem)
{
	int j;
	for(j=0;j<elem;j++)
	{
		if(vec[j]!=vec[elem])
		{
			printf("%i", vec[elem]);
			elem++;
		}
	}
}
