#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1, numero2;
	puts("Escribir el primer número: ");
	scanf("%d",&numero1);
	puts("Escribir el segundo número: ");
	scanf("%d",&numero2);
	if(numero1 == numero2){
		printf("Los números son iguales");
	}
	else{
		if(numero1 > numero2){
			printf("El número %d es mayor que el número %d",numero1,numero2);
		}
		else{
			printf("El número %d es mayor que el número %d",numero2,numero1);
		}
	}
	return 0;
}
