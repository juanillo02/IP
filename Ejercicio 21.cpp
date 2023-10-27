// Ejercicio 21

#include<stdio.h>

int main(){
	int n, a, b, c, i;
	printf("Introduce un valor para la serie de Fibonnaci: ");
	scanf("%i", &n);
	if (n<0){ 
	printf("ERROR");
	}
	else {
		if(n==1 || n==2){
		printf("La solucion de la serie es 1.");
		}
	else{
		for(i==3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%i, ", c);
	}
	}
	}
	return 0;
}
