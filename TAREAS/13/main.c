#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
	int lista[argc], c, k, aux;
	for(c=1; c<argc;c++){
		lista[c]=atoi(argv[c]);
	}
	for(c=0;c<argc;c++){//se recorre cada termino de la lista
	for(k=0;k<argc;k++){
	if(lista[k]>lista[k+1]){//con esto se cambian los lugares
	//de modo que estaran de menor a mayor
	aux=lista[k+1];//aqui se almacena el numero siguiente
	lista[k+1]=lista[k];//se cambia de lugar 
	lista[k]=aux;
	
	}
	}
}
for(c=1;c<argc;c++){
	printf("%i", lista[c]);
	
}
printf("\n");
return 0;
}
