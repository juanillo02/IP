// Ejercicio 10

#include<stdio.h>

int main(){
	int s, i;
	i=1;
	s=0;
	while (i<=10){
		s+=i;
		i++;
	}
	printf("La suma es: %i", s);
	return 0;
}
