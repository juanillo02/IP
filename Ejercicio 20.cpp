// Ejercicio 20

#include<stdio.h>

int main(){
	int a, i, div;
	i=1;
	printf("Introduce un numero: ");
	scanf("%i", &a);
	while (i<=a){
		div=a/i;
		i++;
	}
	if (div!=a && div!=1){
		printf("El numero %i es primo.", a);
	}
	else {
	("El numero %i no es primo.", a);
}
return 0;
}
