//ficheros

f=fopen("nombre_fichero en el disco", "modo_apertura"); // 'w' lo destruye y lo crea, 'r' lo lee y 'a' añade si ests creado
//wb, esa b es para pasarlo a binario ocupando menos espacio
//Ejemplo

FILE *f

if ((f=fopen("c:datos", "w"))==NULL)
	printf("Error apertura");
else
	printf("Fichero abierto");
	fclose(f); //Cerrar fichero


char car;
char cad[10];

escribir fichero  //fputc(car,f); fputs(cad,f); fprintf(f,"%s",cad);
leer fichero // car=fgetc(f); fgets(cad,10,f); fscanf(f,"%s",cad);

FILE *f;

if((f=fopen("ejemplo", ""))==NULL)

//Ejemplo

#include<stdio.h>
int main(){
	FILE *f;
	char cad;
	if((f=fopen("fichcar","w"))==NULL)
	printf("No se ha realizado la apertura");
	else { printf("Apertura correcta");
	printf("Introduzca caracter * para fin");
	car=getchar();
	while (car!='*'){
		putchar(car,f);
	}
		printf("Introduzca caracter '*' para fin");
		flcose(f);
} return 0;
}

//Leer fichero
#include<stdio.h>
int main(){
	FILE*f;
	char car;
	if((f=fopen("fichcar","car"))==NULL){
		printf("Error apertura");
		exit (1);
	} else
	while (!EOF(f)){
		car=getchar(f);
		putc(car);
	}
	fclose(f);
	return 0;
}
