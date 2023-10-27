// Codigo ASCII

#include<stdio.h>

int main()
{
	unsigned char car;
	printf ("Introduce un caracter: ");
	scanf("%c", &car);  //car=getchar ()
	printf("El caracter %c se encuentra en la posicion: %i \n", car, car);
	printf("El siguiente caracter %c esta en la posicion: %i \n", car+1, car+1);
	return 0;
}
