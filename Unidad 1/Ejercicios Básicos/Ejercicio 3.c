#include <stdio.h>
int main(int argc, char *argv[]) {
	int a, b, c, resultado;
	printf("Escribir el primer cateto: ");
	scanf("%d", &a);
	printf("Escribir el segundo cateto: ");
	scanf("%d", &b);
	printf("Escribir la hipotenusa: ");
	scanf("%d", &c);
	resultado = a*a + b*b;
	c = c*c;
	if(resultado==c){
		printf("Se cumple el teorema de Pitágoras");
	}
	else{
		printf("No se cumple el teorema de Pitágoras");
	}
	return 0;
}
