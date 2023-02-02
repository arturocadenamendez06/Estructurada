#include <stdio.h>

int main(int argc, char *argv[]) {
	/*En un videoclub se ofrece la promoción de llevarse 
	tres películas por el precio de las dos más baratas. Haga un 
	programa que, dados los tres precios de las películas, determine 
	la cantidad a pagar.*/
	
	float precio1,precio2,precio3,total;
	printf("Escribir el precio de la primer película: ");
	scanf("%f",&precio1);
	printf("Escribir el precio de la segunda película: ");
	scanf("%f",&precio2);
	printf("Escribir el precio de la tercera película: ");
	scanf("%f",&precio3);
	
	if(precio1 > precio2 && precio1 > precio3){
		total = precio2 + precio3;
	}
	else{
		if(precio2 > precio1 && precio2 > precio3){
			total = precio1 + precio3;
		}
		else{
			total = precio1 + precio2;
		}
	}
	
	printf("Total = %.2f",total);
	return 0;
}
