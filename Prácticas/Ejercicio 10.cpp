//Ejercicio 10

#include<stdio.h>

void introducir ();
float binomio (int, int);

int main(){
	int n,b,k;
	introducir();
	b=binomio(n,k);
	printf("El valor del binomio es: %.2f.", b);
	return 0;
}

//Cabecera void introducir (int n)
//Precondicion introduce los valores de n y k
//Postcondicion devuelve los valores de n y k

void introducir (){
	int n, k;
	printf("Introduce el valor de n:\n");
	scanf("%i", &n);
	printf("Introduce un valor para k:\n");
	scanf("%i", &k);
	
}

//Cabecera float binomio (int n, int k)
//Precondicion n y k inicializados
//Postcondicion devuelve el valor del binomio

float binomio (int n, int k){
	float s;
	int i, j, a, aux, q, w, b, aux1, e, r, c, l, aux2;
	s=0;
	a=1;
	b=1;
	c=1;
	for(i=1;i<=n;i++){
		q=a*i;
		aux=q;
		q=a;
		a=aux;
	}
	
	for (j=1;j<=k;j++){
		w=b*j;
		aux1=w;
		w=b;
		b=aux1;
	}
	e=n-k;
	if(e<0){
		printf("Error.");
	}
	else{
	for(l=1;l<=e;l++){
		r=c*l;
		aux2=r;
		r=c;
		c=aux2;
	}
	s=q/(w*r);
	}
	return s;
}
