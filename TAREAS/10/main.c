#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	double a, b, c, discriminante, potencia, multiplicacion;
	a=atof(argv[1]);//coeficiente del cuadrado
	b=atof(argv[2]);//termino lineal
	c=atof(argv[3]);//termino independiente
	potencia=b*b;
	multiplicacion=4*a*c;
	discriminante=potencia-multiplicacion;
	if(discriminante>0){
	double x1, x2, raiz;//se declara el calculo de la raiz y el discriminante
	raiz=sqrt(discriminante);
	x1=-b+raiz/2*a;//primer resultado
	x2=-b-raiz/2*a;//segundo resultado
	printf("%.2lf\n",x1);
	printf("%.2lf\n",x2);
	}
	else{
		if(discriminante<0){//cuando es negativo el numero
		double discriminante2,raiz,x1;
		discriminante2=(multiplicacion-potencia);
		x1=-b/2*a;//se serpara la parte real
		raiz=sqrt(discriminante2)/2*a;
		printf("%.2lf+%.2lfi\n",x1,raiz);
		printf("%.2lf-%.2lfi\n",x1,raiz);
	}
	else{//la ultima opcion es la siguiente
	if(discriminante==0){
	double xunica;//solo hay un valor
	xunica=-b/2*a;
	printf("%.2lf\n",xunica);
	}
}
}
return 0;
}
