//Ejercicio 8

#include<stdio.h>
#include<math.h>

int introducir (int);

int main(){
	int n, s, f;
	f=introducir(n);
	printf("La suma es:%i.", f);
	return 0;
}
 //Cabecera int introducir (int n)
 //Precondicion introduce el valor de x y el numero de terminos
 //Postcondicion devuelve la serie
 
int introducir (int n){
	int a, s, i=1, aux, x=0, cont=0;
	printf("Introduce un valor para x:\n");
	scanf("%i", &n);
	printf("Introduce el numero de terminos:\n");
	scanf("%i", &a);
	do{
		s=n-pow(n,i)+x;
		i=i+2;
		aux=s;
		s=x;
		x=aux;
		cont++;
	} while (cont<=a);
	return s;
}


