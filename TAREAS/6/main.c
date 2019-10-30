#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argu[]){
	int resultado;//es lo que se va a mostrar en pantalla
	int argui[argc];//aqui se guardaran los valores enteros
	//se colocan dos for, para hacer y otro para excluir el argu[i]
	for(int i=1;i<argc;i++){
		//neutro multiplicativo
		resultado=1;
		for(int j=1;j<argc;j++){
			argui[j]=atoi(argu[j]);
			resultado=resultado*argui[j];
		}
		//se excluye a argu[i] con su inverso multiplicativo
		resultado=resultado/argui[i];
		printf("%i\n",resultado);
	}
	return 0;
}
