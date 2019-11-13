#include <stdio.h>
int regresar(int x){
	int a, z=0;
	//variable de return y el contador
	for(a=0;a<x;a++){
		//se van sumando las personas
		z=z+a;//para concatenar los valores
	}
	return z;
	//regresa el numero de saludos
}

int main(int argc, char*argv[]){
	int personas,n;
	personas=atoi(argv[1]);
	n=regresar(personas);
	printf("%i\n",n);
	return 0;
}
