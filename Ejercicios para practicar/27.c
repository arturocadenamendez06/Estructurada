#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Hacer un programa que determine si un número entero es perfecto. Un número es perfecto si la
	suma de los divisores distintos comprendidos de 1 a n-1 es igual al número.*/
	int numero,total,modulo,x;
	printf("Escribir un número: ");
	scanf("%d",&numero);
	total = 0;
	for(x=1;x<numero;x++){
		modulo = numero % x;
		if(modulo==0){
			total = total + x;
		}
	}
	if(total==numero){
		printf("El número es perfecto");
	}
	else{
		printf("El número NO es perfecto");
	}
	return 0;
}
