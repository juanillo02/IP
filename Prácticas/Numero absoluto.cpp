//numero absoluto

#include<stdio.h>

int absoluto (int); //declaracion
void proc_abosoluto (int); //prototipo

int main(){
	int num, auxnum;
	printf("Introduce un numero: ");
	scanf("%i", &num);
	auxnum=absoluto(num); //parametro real o actual
	printf("El absoluto de %i es %i.\n", num, auxnum);
	proc_absoluto(n);
	return 0;
}

// cabecera int absoluto (int n)
// precondicion n inicializado
// postcondicion devuelve el absoluto de n

int absoluto (int n){ //definicion de la funcion
	if (n<0) n=-n;
	return n;
}

// cabecera void proc_absoluto (int n)
// precondicion n inicializado
// postcondicion escribe el absoluto de n

void proc_absoluto (int n){ //definicion de la funcion
	int aux=n;
	if (n<0) n=-n;
	printf("El valor absoluto de %i es %i. \n", aux, n)
}
