#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float x, y, resultado;
	int i; 
	//se declaran las variables xy
	//x es la base, mientras y es el exponente
	x=atof(argv[1]);
	y=atof(argv[2]);
	//asignamos valores
	resultado=1;
	for(i=0; i<y, i++){
		//i aumentara en uno hasta llegar al exponente
		resultado=resultado*x;
	}
	printf("%.2f\n",resultado);
	return 0;
}	

