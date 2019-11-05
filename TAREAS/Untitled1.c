#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
	//se declara la otra lista para guardar la lista de argu
	int lista[argc],suma=0;
	//argc es el numero de argumentos
	float promedio;
	//es para que pueda incluirse los decimales
	for (int i=1;i<argc;i++){
		lista[i]=atoi(argu[i]);
		//se copia argu a lista
	}
	for (int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	promedio=(float)suma/(argc-1);
	printf("%.2f\n",promedio);
	return 0;
	}
