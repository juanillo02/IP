//Ejercicio 15

#include<stdio.h>
#include<math.h>
 int main(){
 	int b, e, cont=0, pot=1;
 	puts("Introduce una base y un exponente: ");
 	scanf("%d%d", &b, &e);
 	while (cont < abs(e)){
 		pot*=b;
 		cont++;
	 }
	 if(e<0) {
	 	printf("La potencia es %.3f.", (float)1/pot);
	 }
	 else{
	 	printf("La potencia es %d", pot);
	 }
	 if (e==0){
	 	printf ("La potencia es 1.");
	 }
	 return 0;	
 }
