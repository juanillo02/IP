// Ejercicio 24

#include<stdio.h>

int main()
{
	int a, b, i, div;
	printf ("Introduce un rango:\n");
	scanf("%i%i", &a, &b);
	i=1;
	if (a>b)
	{
		printf("No se pueden dar los numeros ya que el rango esta mal expresado.");
	}
	else
	{
		while (a<=b)
		{
			do
			{
				div=a&i;
				i++;
			} while (i<=a);
			if (div!=a && div!=1)
			{
		    		printf("%i ", a);
		    		a++;
	    		}
		}
	}
	return 0;
}
