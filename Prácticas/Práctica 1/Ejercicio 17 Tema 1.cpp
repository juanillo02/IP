//Ejercicio 17

#include<stdio.h>
#include<math.h>

int main(){
	int x, a, b, c, d, p;
	printf("Introduce un valor para los coeficientes a, b, c y d: ");
	scanf("%i,%i,%i,%i", &a,&b,&c,&d);
	printf("Introduce un valor para el coeficiente x: ");
	scanf("%i", &x);
	p = a*pow(x,3) + b*pow(x,2) + c*x +d;
	printf("El resultado del polinomio es: %i", p);
	return 0;
}
