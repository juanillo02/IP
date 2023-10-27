//Ejercicio 15

#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
	float r, p, a, v;
	printf("Introduce un valor para el radio: ");
	scanf("%f", &r);
	p = 2*PI*r;
	a = PI*(pow(r,2));
	v = (4./3)*PI*(pow(r,3));
	printf("El perimetro de la circunferencia de radio %.1f, es: %.3f \nEl area del circulo de radio %.1f, es: %.3f \nEl volumen de la esfera de radio %.1f, es: %.3f", r, p, r, a, r, v);
	return 0;
}
