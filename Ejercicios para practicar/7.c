#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribir un programa que lea dos números e imprima si el primer número es múltiplo del segundo.*/
	int num1, num2,respuesta;
	printf("Escribir el primer número: ");
	scanf("%d",&num1);
	printf("Escribir el segundo número: ");
	scanf("%d",&num2);
	respuesta = num1;
	while(num1 >= num2){
		num1 = num1 - num2;
	}
	if(num1 == 0){
		printf("%d es múltiplo de %d",respuesta,num2);
	}
	else{
		printf("%d no es múltiplo de %d",respuesta,num2);
	}
	return 0;
}
