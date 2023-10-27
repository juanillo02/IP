//Ejercicio 5

#include<stdio.h>
int main(){
	int a, b;
	char x;
	printf("Introduce un simbolo: "); //El simbolo tiene que ir antes de las variables. Se podria ponerr despues pero usando fflush (stdin) para eliminar la entrada del teclado.
	scanf("%c",&x); //Otra opcion es escribir scanf("%c",&x); con un espacio delante de %c. Se puede utilizar scanf("%c",&x); o tambien oper = getchar ();
	printf("Introduce un valor para a: ");
	scanf("%i", &a);
	printf("Introduce un valor para b: ");
	scanf("%i", &b);
	switch (x){
		case '+': printf("La suma es: %i\n", a+b); break;
		case '-': printf("Las restas son: %i, %i\n", a-b, b-a); break;
		case '*': printf("La multiplicacion es: %i\n", a*b); break;
		case '/': printf("Las divisiones son: %i, %i\n", b/a, a/b); break;
	}
	return 0;
}
