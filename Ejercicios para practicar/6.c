#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribir un programa que realice la operación producto mediante operaciones sucesivas de suma.*/
	int numero,divisor,i,respuesta;
	printf("Escribir el numero: ");
	scanf("%d",&numero);
	printf("Escribir el divisor: ");
	scanf("%d",&divisor);
	respuesta = 0;
	for(i=1;i<=divisor;i++){
		respuesta = respuesta + numero;
	}
	printf("Respuesta: %d",respuesta);
	return 0;
}
