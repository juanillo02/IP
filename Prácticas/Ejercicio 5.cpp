//Ejercicio 5

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 5

void obtener(int *, int);
int maximo(int *, int);

int main(){
	int v[N];
	obtener(v,N);
	printf("El valor mayor del vector es %i\n", maximo(v,N));
	return 0;
}

void obtener(int *vect, int elem){
	int i;
	for(i=0;i<elem;i++){
		printf("\n Introduce valores elemento %i =", i);
		scanf("%i", vect+1); //scanf("%i", &vect[i]);
	}
}
