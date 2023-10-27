// Ejercicio 1

#include<stdio.h>

int cuadrante(int, int);

int main()
{
	int x, y, r;
	printf("Introduce una coordenada para x e y: \n");
	scanf("%i%i", &x,&y);
	r=cuadrante(x,y);
	printf("El punto (%i,%i) se encuentra en el cuadrante %i.", x, y, r);
	return 0;
	
}

int cuadrante (int a, int b)
{
	if (a>0 && b>0)
	{
		return 1;
	}
	if (a<0 && b>0)
	{
		return 2;
	}
	if (a<0 && b<0)
	{
		return 3;
	}
	if (a>0 && b<0)
	{
		return 4;
	}
	if (a==0 || b==0)
	{
		return 0;
	}
}
