#include <stdio.h>

int main(int argc, char *argv[]) {
	int operacion;
	float num1,num2,respuesta;
	printf(" 1 es suma, 2 es resta, 3 es multiplicación y 4 es división.\n");
	printf("Escribir el número de la operación: ");
	scanf("%d",&operacion);
	printf("Escribir el primer número: ");
	scanf("%f",&num1);
	printf("Escribir el segundo número: ");
	scanf("%f",&num2);
	
	switch(operacion){
	case 1:
		respuesta = num1 + num2;
		printf("Respuesta: %.2f",respuesta);
		break;
	case 2:
		respuesta = num1 - num2;
		printf("Respuesta: %.2f",respuesta);
		break;
	case 3:
		respuesta = num1 * num2;
		printf("Respuesta: %.2f",respuesta);
		break;
	case 4:
		respuesta = num1 / num2;
		printf("Respuesta: %.2f",respuesta);
		break;
	default:
		printf("Operación inválida");
	}
	
	return 0;
}
