#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribe un programa que lea un número de día, un número de mes y un número de año, e imprima
	la fecha en formato dd/mes/aaaa.*/
	int dia,mes,an;
	printf("Escribir el día: ");
	scanf("%d",&dia);
	printf("Escribir el mes: ");
	scanf("%d",&mes);
	printf("Escribir el año: ");
	scanf("%d",&an);
	
	if(dia < 1 || dia > 30 || mes < 1 || mes > 12 || an < 0){
		printf("\nEntrada inválida");
	}
	else{
		switch(mes){
		case 1:
			printf("%d/enero/%d",dia,an);
			break;
		case 2:
			printf("%d/febrero/%d",dia,an);
			break;
		case 3:
			printf("%d/marzo/%d",dia,an);
			break;
		case 4:
			printf("%d/abril/%d",dia,an);
			break;
		case 5:
			printf("%d/mayo/%d",dia,an);
			break;
		case 6:
			printf("%d/junio/%d",dia,an);
			break;
		case 7:
			printf("%d/julio/%d",dia,an);
			break;
		case 8:
			printf("%d/agosto/%d",dia,an);
			break;
		case 9:
			printf("%d/septiembre/%d",dia,an);
			break;
		case 10:
			printf("%d/octubre/%d",dia,an);
			break;
		case 11:
			printf("%d/noviembre/%d",dia,an);
			break;
		case 12:
			printf("%d/diciembre/%d",dia,an);
			break;
		}
	}
	return 0;
}
