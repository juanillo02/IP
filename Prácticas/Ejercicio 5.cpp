// Ejercicio 5

#include<stdio.h>
#include<stdlib.h>

void intercambio (int *, int *);

int main(){
	int *a, *b;
	printf("Escribe dos numeros:\n");
	scanf("%i%i", &a, &b);
	printf("Los numeros son %i y %i:\n", a, b);
	intercambio(&a, &b);
	printf("Los numeros intercambiados son: %i y %i.", a, b);
	return 0; 
}

void intercambio (int *x, int *y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
