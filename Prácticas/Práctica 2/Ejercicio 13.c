// Ejercio 13

#include<stdio.h>

int main()
{
	int a, suma;
	float i, media;
	i=0;
	suma=0;
	do
	{
		printf("Introduce un numero: ");
     		scanf("%i", &a);
     		i++;
     		suma=suma+a;
	}while (a>0);
	media=suma/(i=i-1);
	printf("La media es: %.1f", media);
	return 0;
}

