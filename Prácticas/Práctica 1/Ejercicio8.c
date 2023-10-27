//Ejercicio 8

#include<stdio.h>

int main()
{
	float a, b, s, r1, r2, m, d1, d2;
	printf("Introduce el valor de a y de b: ");
	scanf("%f,%f", &a, &b);
	s=a+b;
	r1=a-b;
	r2=b-a;
	m=a*b;
	d1=a/b;
	d2=b/a;
	printf("La suma de los dos numeros es: %.0f", s);
	printf("La resta de los dos numeros es: %.0f", r1);
	printf("La resta de los dos numeros es: %.0f", r2);
	printf("La multiplicacion de los dos numeros es: %.0f", m);
	printf("La division de los dos numeros es: %.0f", d1);
	printf("La division de los dos numeros es: %.0f", d2);
	return 0;
}
