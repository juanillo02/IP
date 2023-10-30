//Ejercicio 20

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cuenta (char *, char);

int main(){
	/*char car, resp;
	char cad[10];
	puts("Introduce caracter a buscar en cad");
	car=getchar();
	//scanf(%c",&car);
	printf()
	do{
		fflush
	} while
	*/
	
	int  a, b;
	char v[30];
	puts("Escribe una cadena:");
	fgets(v,30,stdin);
	b=cuenta(v,a);
	printf("El caracter %i se repite %i veces.", a, b);
	return 0;
}

int cuenta (char *cad, char c){
	int i, j=0;
	printf("Introduce el caracter que desea contar: ");
	scanf("%i", &c);
	for(i=0;cad[i]!='\0';i++){
		if(cad[i]==c) j++;
	}
	return j;
}
