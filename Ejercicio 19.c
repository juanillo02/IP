#include <stdio.h>

int main(){
int a,n;
int i=1;
//char resp;
printf("Introduzca el numero:");
scanf ("%i",&a);
do{
    a=a/10;
    i++;
}
while(abs (a)>9);   //Mayor que 9 para explicar que el numero tiene mas de 2 cifras
printf("El numero tiene %i cifras",i);  //se pide el absouluto para comprobar las cifras de numeros negativos


//printf("Quieres continuar s/n?");
//fflush(stdin);    //Hay que limpiar la memoria del teclado para volver a pedir algo por él
//resp=getchar();

return 0;
}

