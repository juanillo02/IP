// Ejercicio 4

#include<stdio.h>

int main(){
	int *x, y;
	printf("Introduzca un valor:\n");
	scanf("%i", &y);
	x=&y;
	printf ("La direccion del entero es %p y el contenido %d\n", &y, x);
    printf ("La direccion del puntero es %p y el contenido %p\n", &x, x);
    printf ("El valor referenciado por el puntero es %d\n", *x);
	return 0;
}
