#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	char car;
	if((f=fopen("fichcar","w"))==NULL)
		printf("No se ha realizado la apertura.\n");
	else
	{
		printf("Apertura correcta.\n");
		printf("Introduzca caracter * para fin");
		car=getchar();
		while (car!='*')
		{
			putc(car,f);
		}
		printf("Introduzca caracter '*' para fin.\n");
		fclose(f);
	}
	return 0;
}
