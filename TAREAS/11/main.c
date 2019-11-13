#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//la ultima libreria sirve para el valor absoluto
double RAIZ(float numero, float tolerancia, float candidato){
	double x, y, z, w;
	x=numero/candidato;
	y=(x+candidato)/2;
	do{
		z=numero/y;
		w=fabs(z-y);
		y=(z+y)/2;//se realiza esta accion para cambiar de numero y 
		//aproximarse mas a la raiz
	}while(w>=tolerancia);
	//se rpite hasta que w sea menor igual a la tolerancia
	return z;//se regresa el valor mas cercano de la tolerancia
}

int main(int argc, char *argu[]){
	double n, t, c, r;
	n=atof(argu[1]);//numero del cual se desea sacar la raiz
	t=atof(argu[2]);//es la tolerancia
	c=atof(argu[3]);//es el candidato
	r=RAIZ(n, t, c);// se requiere a la funcion RAIZ
	printf("%lf\n", r);
	return 0;
}
