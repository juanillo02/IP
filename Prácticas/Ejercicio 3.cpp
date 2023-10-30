//Ejercicio 3

#include<stdio.h>
#define N 10

void numeros_vector(int[], int);
void mostrar_valores(int[], int);
int obtener(int [], int);

int main(){
	int v[N], o;
	numeros_vector(v,N);
	mostrar_valores(v,N);
	o=obtener(v,N);
	return 0;
}

void numeros_vector(int vec[], int elem){
	int i;
	i=0;
	do{
		printf("Introduce un numero para el vector %i:\n", i);
		scanf("%i", &vec[i]);
		if(vec[i]>=0 && vec[i]<=10)
		i++;
	}while (i<elem);
}


void mostrar_valores(int vec[], int elem){
	int i;
	for(i=0;i<elem;i++){
		printf("\n v[%i]=%i", i, vec[i]);
	}
}

int obtener(int vec[], int elem){
	int e=0, j;
	for(j=0;j<elem+1;j++){
	printf("\nExisten %i elementos de %i", e, j);
	if(vec[j] == vec[e])
	e++;
}
}

// Ejercicio 6
// *vector es una direccion + *(vector+1), esto es igual a 1+7=8
// *(vector+0) es una direccion
