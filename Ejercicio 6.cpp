//Ejercicio 6
#include<stdio.h>

int main(){
	int a;
	printf("Introduce un numero del 1 al 7: ");
	scanf("%i", &a);
	switch(a){
		case 1: printf("El dia de la semana elegido es el Lunes.\n"); break;
		case 2: printf("El dia de la semana elegido es el Martes.\n"); break;
		case 3: printf("El dia de la semana elegido es el Miercoles.\n"); break;
		case 4: printf("El dia de la semana elegido es el Jueves.\n"); break;
		case 5: printf("El dia de la semana elegido es el Viernes.\n"); break;
		case 6: printf("El dia de la semana elegido es el Sabado.\n"); break;
		case 7: printf("El dia de la semana elegido es el Domingo.\n"); break;
		default: printf("No se ha elegido un dia de la semana.");
	}
	return 0;
}
