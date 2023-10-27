//Ejercicio 2

#include<stdio.h>

int main(){
	int a, b, c, aux;
	printf("Introduce un valor para a: ");
	scanf("%i,%i,%i", &a);
	printf("Introduce un valor para b: ");
	scanf("%i", &b);
	printf("Introduce un valor para c: ");
	scanf("%i", &c);
	if ("a>b") aux=a; a=b; b=aux;
	if ("b>c") aux=b; b=c; c=aux;
	if ("c>a") aux=c; c=a; a=aux;
	printf("El mayor numero es %i y el menor es %i", a, c);
	return 0;
}
