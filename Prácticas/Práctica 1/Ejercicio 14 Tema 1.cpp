// Ejercicio 14

#include<stdio.h>
#include<math.h>

int main(){
	int N, P1, P2, P3, P4;
	printf("Introduce un valor para N: ");
	scanf("%i", &N);
	P1 = pow(N,2);
	P2 = pow(N,3);
	P3 = pow(2,N);
	P4 = pow(3,N);
	printf("Los resultados son: %i, %i, %i, %i", P1, P2, P3, P4);
	return 0;
}
