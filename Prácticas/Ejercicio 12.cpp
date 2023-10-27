// Ejercicio 12

#include<stdio.h>

//int add_divisors(int);
void add_divRef(int, int*);

int main(){
	int a, s;
	printf("Introduce un numero:\n");
	scanf("%i", &a);
//	s=add_divisors(a);
add_divRef(a, &s);
	printf("La suma es: %i", s);
	return 0;
}

//Cabecera int add_divisors(int num)
//Precondicion num>0
//Postcondicion devuelve la suma de los divisores

/*int add_divisors(int num){
	int suma=0, i;
	for(i=1; i<=num;i++){
		if(num%i==0){
		suma=suma+i;
	}
	}
	return suma;
}*/

void add_divRef(int num, int *suma){
	int i;
	*suma=0;
	for(i=1;i<=num;i++){
		if(num%i==0){
			*suma+=i;
		}
	}
}
