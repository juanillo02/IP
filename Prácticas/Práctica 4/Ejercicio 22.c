//Ejercicio 22

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void invertir(char *);

int main()
{
	int n; //numero de elementos
	char *cadena; //puntero a char
	do
	{
		puts("Cuantos elementos quieres en la cadena?");
		scanf("%i", &n);
	} while(n<1);
	//crear vector de manera dinamica
	if ((cadena=(char *)malloc(n*sizeof(char)))==NULL)
	puts("No se ha realizado reserva de memoria");
	else
	{
		printf("Introduce cadena de menos de %i caracteres\n", n);
		fflush(stdin);
		fgets(cadena,n,stdin);
		if(cadena[strlen(cadena)-1]=='\n')cadena[strlen(cadena)-1]='\0';
		//printf("La cadena original es: %c\n", *cadena);
		invertir(cadena);
		puts("La cadena es");
		puts(cadena);
	}
	return 0;
}

void invertir(char *cad)
{
	int i=0, j;
	char aux;
	j=strlen(cad)-1;
	while(i<j)
	{
		aux=cad[i];
		cad[i]=cad[j];
		cad[j]=aux;
		i++;
		j--;
	}
	
}
