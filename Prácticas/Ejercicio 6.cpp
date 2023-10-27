//Ejercicio 6 %p o %x direccion 

#include<stdio.h>

void obtener_valores(float*, float*);
float calcular (float, float);
void imprimir_respuesta (float);
	
int main(){
	float res, vol,  intensidad;
	obtener_valores(&res,&vol);
	intensidad=calcular(res,vol);
	imprimir_respuesta(intensidad);
	return 0;
}

// Cabecera void obtener_valores (float *r, float *v)
// Precondicion inicializar res y vol
// Postcondicion Escribre los valores de res y vol

void obtener_valores (float *r, float *v){
	printf("Introduzca un valor para la resistencia:\n");
	scanf("%f", r);
	printf("Introduzca un valor para la voltaje:\n");
	scanf("%f", v);
}

// Cabecera float calcular (float res, float vol)
// Precondicion inicializa la i
// Postcondicion devuelve la intensidad calculada

float calcular (float res, float vol){
	float i;
	i=vol/res;
	return i;
}

// Cabecera void imprimir_respuesta (float intensidad)
// Precondicion llama a la intensidad
// Postcondicion mostrar en pantalla la intensidad

void imprimir_respuesta (float intensidad){
	printf("La intensidad es: %.2f", intensidad);
}
