#include <stdio.h>
#include <stdlib.h>

int sumaDigitos(int Num){
	//permite hacer la suma de digitos de manera mas ordenada
	int Suma=0, Resto;
	while(Num!=0){
		//solo se admiten numeros positivos
		Resto=(Num%10);
		Suma=(Suma+Resto);
		//se van sumando los resultados
		Num=(Num/10);
	}
	//se regresa el resultado de la operacion
	return (Suma);
}

int main(int argc, char *argv[]){
	int num;
	num=atof(argv[1]);
	printf("%d\n", sumaDigitos(num));
	//se llama a la funcion anterior
	return 0;
}
