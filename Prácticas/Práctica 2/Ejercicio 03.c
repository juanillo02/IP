//Ejercicio 3

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b, c, x1, x2, r;
	printf("Introduce el valor para a: ");
	scanf("%f", &a);
	printf("Introduce el valor para b: ");
	scanf("%f", &b);
	printf("Introduce el valor para c: ");
	scanf("%f", &c);
	if (a==0)
	{
		if(b==0)
		{
			printf("Con los datos dados no se podria hacer la ecuacion.");
		}
		else
		{
			printf("La ecuacion no es de primer grado.\n");
			printf("La ecuacion solo tendra una solucion al ser de primer grado que sera: %f", float(-c/b));
		}
	}
	else 
	{
		r= pow(b,2)-4*a*c;
		if (r<0)
		{
			puts ("La solucion no es real.");
		}
		else 
		{
			x1=((-b+sqrt(pow(b,2)-4*a*c))/2*a);
			x2=((-b-sqrt(pow(b,2)-4*a*c))/2*a);
			if (x1==x2)
			{
				printf("Hay una unica solucion soble %f \n");
			}
			else
			{
				puts ("Las soluciones ordenadas son: \n");
				if (x1>x2)
				{
					printf ("%0.2f y %0.2f\n", x1, x2);
				}
            			else
				{	
					("%0.2f y %0.2f\n", x2, x1);
				}
			}
		}
	}
	return 0;
	
}
