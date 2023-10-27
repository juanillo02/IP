//Ejercicio 14

#include<stdio.h>

int main()
{
	int n, fact, i, a, aux;
	i=1;
	a=1;
	printf ("Introduce un numero: ");
	scanf("%i", &n);
	if (n<0)
	{
		printf("El numero introducido es menor que 0, por lo que no se puede hacer el factorial.");
	}
	else
	{
		n=n+1;
		while (i<=n)
		{
			fact=i*a;
			i++;
			aux=fact;
			fact=a;
			a=aux;
		}
	printf("EL factorial de %i es: %i", n=n-1, fact);
	}
	return 0;
}
