//Ejercicio 4

#include<stdio.h>

int main (){
	int a, b, d;
	printf("Introduce un valor para a: ");
	scanf("%i", &a);
	printf("Introduce un valor para b: ");
	scanf("%i", &b);
	if (a==b)printf("Los numeros son iguales.");
	else
	{
	if (b != 0) if (a%b==0) printf("El primero numero es divisible por el segundo.");
	else ("El primer numero no es divisible por el segundo");
	else printf("No se puede dividir por cero");
	if (a != 0) if (b%a==0) printf("El segunndo numero es divisible por el primero.");
	else printf("El segundo numero no es divisible por el primero.");
	else printf("No se puede dividir por cero.");
}
return 0;
}
