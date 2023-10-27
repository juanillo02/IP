//Ejercicio 1

#include<stdio.h>

int main(){
	int x;
	printf("Introduce un numero: ");
	scanf("%i", &x);
	if (x < 0)
	printf ("el numero es negativo.", x);
	else
	if (x%2 == 0)
	printf("El numero es par.", x);
	else 
	printf("El numero es impar.", x);
	return 0;
}
