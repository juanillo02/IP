// Ejercicio 13

#include<stdio.h>
#include<math.h>

int main()
{
	float h, p, i;
	printf("Las horas que ha trabajado son: ");
	scanf("%f", &h);
	printf("El precio de las horas es de: ");
	scanf("%f", &p);
	i = 0.9*(h*p);
	printf("El salario neto del trabajador por trabajar %.0f horas a %.0f euro, es de: %.2f", h, p, i);
	return 0;
}
