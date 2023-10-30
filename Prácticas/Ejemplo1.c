#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
	float radio, longitud, volumen, area;
	printf("Escribe el radio que desea: ");
	scanf("%f", &radio);
	longitud = 2 * PI * radio;
	area = PI * pow(radio,2);
	volumen = 4./3 * PI * pow(radio,3);
	printf("La longitud es: %.3f. \nEl area es: %.3f. \nEl volumen es: %.3f. \n", longitud, area, volumen);
	return 0;	
}
