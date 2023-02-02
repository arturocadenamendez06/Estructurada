#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribir un programa que, dado un número real cualquiera, 
	encuentre su valor absoluto. El valor absoluto de un número x es igual 
	a x si x es mayor que 0, y a x si x es menor o igual a 0.*/
  
	float numero;
	printf("Escribir un número: ");
	scanf("%f",&numero);
	if(numero<0){
		numero = numero * -1;
	}
	printf("Valor absoluto = %.2f",numero);
	return 0;
}
