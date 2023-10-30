#include<stdio.h>

int main()
{
	FILE *f;
	int v[6];
	f=fopen("ejemplobinario","wb");
	fwrite(v,sizeof(int),2,f);
	fwrite(v,sizeof(int),6,f);
	fwrite(&v[1],sizeof(int),3,f);
	fwrite(&v[3],sizeof(int),1,f);
	return 0;
}

int m[6];
int i;
f=fopen("ejemplobin","rb");
fread(m,sizeof(int),6,f);
for(i=0;i<6;i++)
{
	printf("%i",m[i]); //Escribiria 2 4 6 7 8
}
