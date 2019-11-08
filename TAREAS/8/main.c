#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argu[]){
	float x, y, resultado;
	//declaramos las variables C es de celsius
	//a farenheit y y es lo contrario
	
	x=atof(argu[1]);
	y=atof(argu[2]);
	//el if es para ejecutar en cada caso
	
	if(x==0){
		resultado=(y*1.8)+32;
		//es la formula de conversion a farenheit
		printf("%.2f\n", resultado);
	} 
	if (x==1){
		resultado=(y-32)/1.8;
		//sirve para obtener celsius
		printf("%.2f\n", resultado);
	}
	return 0;
}
