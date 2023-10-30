#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*f;
	char car;
	if((f=fopen("fichcar","r"))==NULL){
		printf("Error apertura");
	//	exit (1);
	} else
	while (!EOF==(f)){
		car=getchar();
		putc(car,f);
	}
	fclose(f);
	return 0;
}
