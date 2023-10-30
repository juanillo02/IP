//Prueba de break y continue

#include<stdio.h>

int main()
{
	int i;
	for(i=1; i<10; i++)
	{
		if (i==4)
		{
			puts("aqui hay un salto");continue;
		}
		if (i==7) break;
		printf("El valor de i es %d\n", i);
	}
	printf("El valor de i fuera del for es %d\n", i);
	return 0;
}
