// Ejercicio 23

#include<stdio.h>

int main(){
	int a, b, MCD, aux, resto, x, y;
		printf("Introduce un valor para a y otro para b, siendo ambos positivos:\n");
		scanf("%i%i", &a,&b);
	if (a<b){
		aux=a;
		a=b;
		b=aux;
	}
	do{
		x=a;
		y=b;
		resto=x%y;
		x=y;
		y=resto;
	} while (resto>0);
	MCD=x;
	printf ("El MCD de %i y de %i es: %i", a, b, MCD);
	return 0;
}
