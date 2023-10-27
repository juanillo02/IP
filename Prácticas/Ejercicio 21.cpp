//Ejercicio 21

#include<stdio.h>
#include<stdlib.h>

float suma (float, float);
float resta (float, float);
float mult (float, float);
float div (float, float);
char menu(float, float);

int main(){
	float a, b;
	printf("Introduce dos numeros:\n");
	scanf("%i%i", &a, &b);
	menu(a, b);
	return 0;
}

float suma(float x, float y){
	float s;
	s=x+y;
	return s;
}

float resta(float x, float y){
	float r;
	r=x+y;
	return r;
}

float mult(float x, float y){
	float m;
	m=x+y;
	return m;
}

float div(float x, float y){
	float d;
	d=x+y;
	return d;
}

char menu(float x, float y){
	char c;
	switch (c){
		case '+': printf ("La suma %i+%i=%i", x, y); break;
		case '-': printf ("La resta %i-%i=%i", x, y); break;
		case '*': printf ("La multiplicacion %i*%i=%i", x, y); break;
		case '/': printf ("La division %i/%i=%i", x, y); break; 
		default: ("ERROR.");
	}
}
