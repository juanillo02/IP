//Ejercicio  9

#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, m;
	printf("Introduce un valor para a: ");
	scanf("%f", &a);
	printf("Introduce un valor para b: ");
	scanf("%f", &b);
	printf("Introduce un valor para c :");
	scanf("%f", &c);
	m = (a+b+c)/3;
	printf("La media aritmetica de los 3 numeros es de: %.1f", m);
	return 0;
}
