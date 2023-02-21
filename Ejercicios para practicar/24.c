#include <stdio.h>

int main(int argc, char *argv[]) {
	int oracion;
	int cuenta=0,total=0,nc;
	printf("Escribir la oracion: ");
	while((oracion = getchar()) != '\n'){
		if((oracion>=65 && oracion<=90) || (oracion>=97)&&(oracion<=122)){
			cuenta++;
		}
		total++;
	}
	nc = total - cuenta;
	printf("Número de caracteres no letra: %d",nc);
	return 0;
}
