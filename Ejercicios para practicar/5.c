#include <stdio.h>

int main(int argc, char *argv[]) {
	//Hola Mundo
	/*Escribir un programa que realice la operación módulo mediante operaciones sucesivas de resta. En
	programación el módulo de un número es el resto de la división de dicho número entre otro número.*/
	int numero,divisor;
	printf("Escribir el número: ");
	scanf("%d",&numero);
	printf("Escribir el divisor: ");
	scanf("%d",&divisor);
	while(numero >= divisor){
		numero = numero - divisor;
	}
	printf("El módulo es: %d",numero);
	return 0;
}
