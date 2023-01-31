#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribir un programa que lea un número del día de la semana (1-7) y se imprima el nombre del día.*/
	int numero;
	printf("Escribir el número del día de la semana: ");
	scanf("%d",&numero);
	switch(numero){
	case 1: 
		printf("Lunes");
		break;
	case 2:
		printf("Martes");
		break;
	case 3:
		printf("Miércoles");
		break;
	case 4:
		printf("Jueves");
		break;
	case 5:
		printf("Viernes");
		break;
	case 6:
		printf("Sábado");
		break;
	case 7:
		printf("Domingo");
		break;
	default:
		printf("Día inválido");
	}
	return 0;
}
