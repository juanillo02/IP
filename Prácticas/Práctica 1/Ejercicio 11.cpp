//Ejercicio 11

#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
	float f, l, x;
	printf("Introduce un valor para la frecuencia: ");
	scanf("%f", &f);
	printf("Introduce un valor para la inductancia: ");
	scanf("%f", &l);
	x = 2*PI*f*l;
	printf("El valor de la resistencia inducida es de: %.2f", x);
	return 0;
}
