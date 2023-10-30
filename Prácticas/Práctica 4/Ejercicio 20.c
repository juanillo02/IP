//Ejercicio 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cuenta (char *);

int main()
{
	int  a;
	char v[30];
	puts("Escribe una cadena:");
	fgets(v,30,stdin);
	a=cuenta(v);
	printf("El caracter %i se repite %i veces.", a, b);
	return 0;
}

int cuenta (char *cad)
{
	int i, j=0;
	char c;
	printf("Introduce el caracter que desea contar: ");
	scanf("%c", &c);
	for(i=0; cad[i] != '\0';i++)
	{
		if(cad[i]==c) j++;
	}
	return j;
}
