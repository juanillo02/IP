// Ejercicio 18

#include<stdio.h>

int main()
{
	int letras, lineas, palabras;
	char c;
	printf("Introduce algo: ");
	scanf("%i", &c);
	letras=1;
	lineas=1;
	palabras=1;
	while ((c=getchar())!= '*')
	{
		if(c== ' ')
		{
		palabras ++;
		}
		else
		{
			if(c== '\n')
			{
				lineas++;
				palabras++;
			}
		letras++;
		}
	}
	printf ("El numero de lineas es: %d. \n", lineas);
	printf ("El numero de letras es: %d. \n", letras);
	printf ("El numero de palabras es: %d. \n",  palabras);
	return 0;
}
