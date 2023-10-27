// Ejercicio 18

#include<stdio.h>
#include<math.h>

int main()
{
	float x1, y1, x2, y2, d;
	printf("Da un valor para x1, y1, x2, y2: ");
	scanf("%f,%f,%f,%f", &x1, &y1, &x2, &y2);
	d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	printf("La distancia entre los dos puntos es de: %.2f", d);
	return 0;
}
