#include <stdio.h>

int main(int argc, char *argv[]) {
	float x0,x1,fx0,fx1,x,z;
	printf("Escribir el valor de x0: ");
	scanf("%f",&x0);
	printf("Escribir el valor de x1: ");
	scanf("%f",&x1);
	do{
		fx0 = x0*x0-4;
		fx1 = x1*x1-4;
		x = x1-((x1-x0)/(fx1-fx0))*fx1;
		x0 = x1;
		x1 = x;
		z = ((x0 - x1) / x1)*100; 
	} while(z>1);
	printf("Respuesta: %.4f",x);
	return 0;
}

