// Ejercicio 12

#include<stdio.h>

int main(){
	int a, b, s, aux;
	printf ("Introduce dos numeros: ");
	scanf("%i%i", &a,&b);
	if (a==b){
	printf ("Los numeros %i y %i son iguales.", a, b);
}
else{
	if (a<b){
		aux=a;
		a=b;
		b=aux;
	}
	s=b+1;
	printf ("Los numeros comprendidos entre %i y %i son: ", a, b);
	while (s<a){
		printf("%i, ", s);
		s++;
	}
}
	return 0;
}
