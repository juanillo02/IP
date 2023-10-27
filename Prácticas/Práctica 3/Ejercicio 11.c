//Ejercicio 11

#include<stdio.h>
#include<math.h>

void parametro();
float fracciones(int, int);
int factorial();

int main()
{
	int x, f, y, fac;
	parametro();
	fac=factorial();
	f=fracciones(x,y);
	return 0;
}

//Cabecera void parametro()
//Precondicion Inicializa x e y
//Postcondicion devuelve el valor para x y el numero de terminos
void parametro()
{
	int x, y;
	printf("Introduce un valor para x:\n");
	scanf("%i", &x);
	printf("Introduce un valor para decidir los terminos:\n");
	scanf("%i", &y);
}

//Cabecera int factorial()
//Precondicion inicializa 
int factorial()
{
    	int f, i, a, aux;
	a=1;
	for(i=1;i<=n;i++)
	{
		f=i*a;
		aux=f;
		f=a;
		a=aux;
	}
	return f;
}

//Cabecera float fracciones (int a, int b)
//Precondicion i<=b
//Postcondicion devuelve la suma de la serie
float fracciones (int a, int b)
{
	float s, i, n;
	n=2;
	while(i<=b)
	{
		s=(pow(a,n))/
	}
}
