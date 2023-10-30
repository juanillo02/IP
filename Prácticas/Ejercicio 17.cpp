// Ejercicio 17

#include<stdio.h>
#include<string.h>

void quitar_saltolinea(char *);
int longitud(char []); // Se puede expresar de las dos maneras ya que se esta pasando direccion de memmoria

int main(){
	char nombre[15];
	int i;
	puts("¿Nombre? Menor que 15 caracteres ");  //puts=printf+'\n' para las cadenas. Si es una cadena de caracteres se puede utilizar printf y puts
	fgets(nombre,15,stdin);
	quitar_saltolinea(nombre);
	printf("El numero de caracteres es %d\n",longitud(nombre));
	return 0;
}

//gets(nombre);  scanf("%s",nombre); Son dos maneras de escribirlo

void quitar_saltolinea(char *cad){
	int i;
	for(i=0; cad[i]!='\0' && cad[i]!='\n';i++);
	if(cad[i]=='\n') cad[i]='\0';
}

int longitud(char *cad){
	int i;
	for(i=0;cad[i]!='\0';i++);
	return i;
}
