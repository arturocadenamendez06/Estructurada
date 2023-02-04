#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Conjetura de Collatz*/
	int numero;
	printf("Escribir un número: ");
	scanf("%d",&numero);
	printf("%d,",numero);
	while(numero != 1){
		if(numero % 2 == 0){
			numero = numero / 2;
		}
		else{
			numero = 3 * numero + 1;
		}
		if(numero==1){
			printf("%d",numero);
		}
		else{
			printf("%d,",numero);
		}
	}
	return 0;
}
