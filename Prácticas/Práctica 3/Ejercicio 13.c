//Ejercicio 13

#include<stdio.h>

void add_divRef(int, int*);

int main()
{
	int s, i;
	for(i=1;i<1000;i++)
	{
    		add_divRef(i, &s);
    		if(i==s)
		{
    			printf("%i\n", i);
		}
	}
	return 0;
}

//Cabecera void add_divRef(int num, int* suma)
//Precondicion a=1000
//Postcondicion devuelve la suma de los divisores
void add_divRef(int num, int *suma)
{
	int j;
	*suma=0;
	for(j=1;j<num;j++)
	{
		if(num%j==0)
		{
			*suma+=j;
		}
	}
}
