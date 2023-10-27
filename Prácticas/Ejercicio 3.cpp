// Ejercicio 3

#include<stdio.h>
#include<math.h>

int suma (int, int);
int resta (int, int);
int producto (int, int);
int division (int, int);

int main(){
	int opcion, s, r, p, d, a, b;
	printf("Intoduce dos numeros enteros: \n");
	scanf("%i%i", &a, &b);
	printf ("Elige que deseas hacer:\n1.- Suma.\n2.- Resta.\n3.-Producto.\n4.- Division.\n");
	scanf("%i", &opcion);
	switch (opcion){
		case 1: 
		s=suma(a,b);
		printf("La suma es: %i", s);
		break;
		case 2: 
		r=resta(a,b);
		printf("La resta es: %i", r);
		break;
		case 3: 
		p=producto(a,b);
		printf("El producto es: %i", p);
		break;
		case 4:
		d=division(a,b);
		printf("La division es: %i", d);
		break;
	}
	return 0;
}

int suma (int a, int b){
	int suma;
	suma=a+b;
	return suma;
}

int resta (int a, int b){
	int resta;
	resta=a-b;
	return resta;
}

int producto (int a, int b){
	int producto;
	producto=a*b;
	return producto;
}

int division (int a, int b){
	int division;
	division=a/b;
	return division;
}
