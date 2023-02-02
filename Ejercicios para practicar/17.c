#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribe un programa que calcule el área de una región circular (el área sombreada en el diagrama),*/
	/*radios de los círculos interno y externo, r1 y r2, respectivamente.*/
	float r1,r2,a1,a2,a;
	printf("Escribir el primer radio (circunferencia interna): ");
	scanf("%f",&r1);
	printf("Escribir el segundo radio (circunferencia externa): ");
	scanf("%f",&r2);
	if(r1 >= r2){
		printf("El radio interno no puede ser mayor que el externo");
	}
	else{
		a1 = 3.1416 * r1 * r1;
		a2 = 3.1416 * r2 * r2;
		a = a2 - a1;
		printf("Area sombreada: %.4f",a);
	}
	return 0;
}
