#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argu[]){
	//se declara la variable suma
	int lista[argc],suma=0;
	//se declara el promedio como un numero real
	float promedio;
	for (int i=1;i<argc;i++){
		lista[i]=atof(argu[i]);
		//se utiliza para poner argu en la lista
	}
	for (int i=1;i<argc;i++){
		suma=suma+lista[i];
		//se suman los elementos de la lista
		//es por ello que se empieza con 0
	}
	promedio=(float)suma/(argc-1);
	printf("%.2f\n",promedio);
	return 0;
}
