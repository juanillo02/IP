// Ejercicio 8

#include<stdio.h>

int main()
{
	int s, m, h;
	printf("Introduce un valor para los segundos: ");
	scanf("%i", &s);
	printf("Introduce un valor para los minutos: ");
	scanf("%i", &m);
	printf("Introduce un valor para las horas: ");
	scanf("%i", &h);
	if (0<s<58) printf("%i:%i:%i\n", h, m, s+1);
	if (m==59 && s==59) printf("%i:0:0\n", h+1);
	if (s==59) printf("%i:%i:0\n", h, m+1);
	if (h>23) printf("00:00:00");
	return 0;
}
