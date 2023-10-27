// Ejercicio 11

#include<stdio.h>

int main()
{
	int s, i;
	i=2;
	s=0;
	while (i<=1000)
	{
		i=i+2;
		s=s+i;
	}
	printf ("La suma es: %i", s);
	return 0;
}
