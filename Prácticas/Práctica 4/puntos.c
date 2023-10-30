#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	float x;
	float y;
} punto;

int main()
{
	punto a, b, *p; //p pide direcciones tipo punto que serian a y b
	               // a y p tendrian dos campos, float x y float y
	//Leer valores sin p
	scanf("%f", &a.x);
	scanf("%f", &a.y);
	//Leer valores con p
	p=*a;
	scanf("%f", &(*p).x); //Equivale a scanf("%f", &p->x);
	scanf("%f", &(*p).y);
}
