//Ejercicio 9

#include<stdio.h>

float factorial (int);

int main()
{
	float n, f;
	printf("Introduce un valor para n:\n");
	scanf("%f", &n);
	f=factorial(n);
	printf("El sumatorio es: %.2f.", f);
}

//Cabecera float factorial (int n)
//Precondicion inicializa n
//Postcondicion devuelve la serie
float factorial (int n)
{
	int f, i, a, aux;
	float s;
	a=1;
	s=0;
	for(i=1;i<=n;i++)
	{
		f=i*a;
		aux=f;
		f=a;
		a=aux;
		s=s+(1.0/f);
	}
	return s;
}
