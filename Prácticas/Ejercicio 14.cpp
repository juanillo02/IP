//Ejercicio 14

#include<stdio.h>

int add_divisors(int num);

int main(){
	int a, b, c, d;
	printf("Introduce un numero positivo para a:\n");
	scanf("%i", &a);
	printf("Introduce un numero positivo para b:\n");
	scanf("%i", &b);
	c=add_divisors(a);
	d=add_divisors(b);
	if (c==d){
		printf("Los numeros %i y %i son amigos.", a, b);
	}
	else
	{
	printf("Los numeros %i y %i no son amigos.", a, b);	
	}
	return 0;
}

//Cabecera int add_divisors(int num)
//Precondicion num>0
//Postcondicion devuelve la suma de los divisores

int add_divisors(int num){
	int suma=0, i;
	for(i=1; i<=num;i++){
		if(num%i==0){
		suma=suma+i;
	}
	}
	return suma;
}
