#include <stdio.h>

int main(int argc, char *argv[]) {
	int num, residuo;
	printf("Escribir un número: ");
	scanf("%d", &num);
	residuo = num%2;
	if(residuo==0){
		printf("El número %d es par",num);
	}
	else{
		printf("El número %d es impar",num);
	}
	return 0;
}
