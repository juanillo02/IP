// Ejercicio 17 getchar (); leer caracter putchar(char); escribir caracter

#include<stdio.h>

int main(){
	char c;
	c=getchar();
	while(c!= EOF){
		//if (c=='a') c='*'; // cambiar la letra a por un *, en este caso.
	putchar(c);
	// putchar('\n'); // escribe caracter a caracter con salto de linea.
	c=getchar();
} //Para finalizar el programa hay que darle a intro y dsps a ctrl+z.
	return 0;
}
