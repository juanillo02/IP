#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef  struct
{
	float x;
	float y;
} punto;

void iniciar (punto *);
int compara (punto *,punto*);

int main()
{
	punto pA, pB;
	puts("Introduce valores al punto 1");
	iniciar(&pA);
	puts("Introduce valores al punto 2");
	iniciar(&pB);
	if(compara(&pA,&pB))
		puts("Los puntos son iguales.");
	else
		puts("Los puntos son distintos.");
	return 0;
}

void iniciar (punto *p)
{
	puts ("Introduce valores al punto coordenada x");
	scanf("%f", &p->x);
	puts ("Introduce valores al punto coordenada y");
	scanf("%f", &p->y);
}

int compara(punto *p1, punto *p2)
{
	return ((p1->x == p2->x && p1->y == p2->y)?1:0); //El ? es un operador ternario si devuelve 1 son iguales si devuelve 0 son distintos
}
