// Ejercicio 1 y 2

#include<stdio.h>
#define N 5

void obtener_valores(int[], int); //void obtener_valores(int *, int);
void mostrar_valores(int[], int);
float media_vector(int [], int);

int main()
{
	int v[N];
	float m;
	obtener_valores(v,N);
	mostrar_valores(v,N);
	m=media_vector(v,N);
	printf("La media de los valores del vector es: %.2f", m);
	return 0;
} 

//Cabecera void obtener_valores(int vec[], int elem)
//Precondicion inicializar el vector
//Postcondicion mostrar los valores
void obtener_valores(int vec[], int elem)
{
	int i;
	for(i=0;i<elem;i++)
	{
		printf("\nEscribe elemento %i:", i);
		scanf("%i", &vec[i]);
	}
}

//Cabecera mostrar_valores (int[], int elem)
//Precondicion inicizalizar valores
//Postcondicion  mostrar los valores del vector
void mostrar_valores(int vec[], int elem)
{
	int i;
	for(i=0;i<elem;i++)
	{
		printf("\n v[%i]=%i", i, vec[i]);
	}
}

//Cabecera float media_valores (int vec[], int elem)
//Precondicion inicializar valores del vector
//Postcondicion devuelve la media de los valores del vector.
float media_valores(int vec[], int elem)
{
	int i, s=0;
	float me;
	for(i=0;i<elem;i++)
	{
		s=vec[i]+s;
	}
	me=s/elem;
	return me;
}
