// Ejercicio 2

#include<stdio.h>
#include<math.h>
#define PI 3.141592

float perimetro (float);
float area (float);
float volumen (float);

int main(){
	int opcion;
	float r, a, v, p;
	printf("Intoduce un valor para el radio: \n");
	scanf("%f", &r);
	printf ("Elige que deseas hacer:\n1.- Perimetro.\n2.- Area.\n3.-Volumen.\n");
	scanf("%i", &opcion);
	switch (opcion){
		case 1: 
		p=perimetro(r);
		printf("El perimetro es: %.3f", p);
		break;
		case 2: 
		a=area(r);
		printf("El area es: %.3f", a);
		break;
		case 3: 
		v=volumen(r);
		printf("El volumen es: %.3f", v);
		break;
	}
	return 0;
}

float perimetro (float r){
	float pe;
	pe=2*PI*r;
	return pe;
}

float area (float r){
	float ar;
	ar=PI*pow(r,2);
	return ar;
}

float volumen (float r){
	float vol;
	vol=(4*PI*pow(r,3)/3);
	return vol;
}
