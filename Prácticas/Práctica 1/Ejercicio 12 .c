//Ejeercicio 12

#include<stdio.h>
#include<math.h>

int main()
{
	float c, F;
	printf("Introduce los grados Celsius: ");
	scanf("%f", &c);
	F = (9./5)*c + 32;
	printf("Los grados Celsius %.1f, en grados Fahrenheit son: %.2f", c, F);
	return 0;
}
