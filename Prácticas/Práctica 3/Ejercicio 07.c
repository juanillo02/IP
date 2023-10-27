//Ejercicio 7

#include<stdio.h>

float suma (float);

int main()
{
	float n, s;
	printf("Introduce un valor para n:\n");
	scanf("%f", &n);
	s=suma(n);
	printf("La suma es: %.2f.", s);
	return 0;
}

//Cabecera float suma (float n)
//Precondicion i<=n
//Postcondicion devuelve la suma de la serie armonica 1/n
float suma (float n)
{
	int i;
	float a, f;
	a=0;
	i=1;
	do
	{
		f=1.0/i;
		a=a+f;
		i++;
	} while(i<=n);
	return a;
}
