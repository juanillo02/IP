//Ejercicio 27

#include<stdio.h>
#include<string.h>
#define MAX 3

typedef struct {
	char nombre[10];
	char apellidos[20];
	int edad;
	char nif[10];
} persona;

void iniciar(persona *, int);
int buscar(persona[], char[], int);

int main(){
	int x, edad;
	char dni[10];
	persona pers[2]; // Se crea un vector con una reserva definiendo como va a ser la estructura, teniendo nombre edad y nif.
	iniciar(pers, 2);
	//x=buscar(pers, 2);
	puts("Introduce dni a buscar:");
	fgets(dni,10,stdin);
	edad=buscar(pers,dni,MAX);
	if (edad!=0)printf("\n\n%s tiene %d anos\n",dni,edad);
	else printf("\n\n%s no existe \n", dni);
	return 0;
}

void iniciar(persona *a, int b){
	int i;
	for(i=0;i<b;i++){
		printf("Introduce un nombre:\n");
		fgets(a[i].nombre,10,stdin);
		fflush(stdin);
		printf("Introduce los apellidos:\n");
		fgets(a[i].apellidos,20,stdin);
		fflush(stdin);
		printf("Introduce la edad:\n");
		scanf("%i", &a[i].edad);
		fflush(stdin);
		printf("Introduce el DNI:\n");
		fgets(a[i].nif,10,stdin);
		fflush(stdin);
	};
}

int buscar(persona a[],char *dni, int c){
	int i, resp=0;
	while(i<c && strcmp(a[i].nif, dni)!=0)
	i++;
	if(i !=c) resp=a[i].edad;
	return resp;
}
