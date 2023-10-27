// Ejercicio 7

#include<stdio.h>

int main ()
{
	int d, m, a;
	printf("Introduce un dia: ");
	scanf("%i", &d);
	printf("Introduce un mes: ");
	scanf("%i", &m);
	printf("Introduce un ano: ");
	scanf("%i", &a);
	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d<0 || d>31)
			{
				printf ("Fecha incorrecta.");
			}
			else
			{
				printf ("Fecha correcta.");
			}break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d<0 || d>30)
			{
				printf("Fecha incorrecta.");
			}
			else
			{
				printf("Fecha correcta.");
		    	}break;
		case 2: 
			if (a%4==0 && a%100!=0 || a%400==0)
			{
				if (d>0 || d<30)
				{
					printf("La fecha es correcta.");
	        		}
			else
			{
				printf("La fecha es incorrecta.");
		    	}}break;
		default: printf("El mes introducido es incorrecto.");
	}
	return 0;
}
