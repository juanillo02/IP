//Periodo del pendulo

#include<stdio.h>
#include<math.h>
#define G 9.8
#define PI 3.14159

int main(){
	float L, periodo;
	printf("Escribe el valor deseado para la logitud: ");
	scanf("%f", &L);
	periodo = 2*PI*sqrt(L/G);
	printf("El periodo es: %f", periodo);
	return 0;
}
