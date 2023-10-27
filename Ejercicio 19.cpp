// Ejercicio 19

#include<stdio.h>
#include<math.h>

int main(){
	int n, cont, a;
	cont=1;
	printf("Introduce un valor: ");
	scanf("%i", &n);
	a=n;
	while (abs (a)>9){
		a=a/10;
		cont++;
	}
	printf("Las cifras que tiene el valor son: %i", cont);
	return 0;
}
