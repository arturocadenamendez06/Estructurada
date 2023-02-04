#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escribir un programa que lea un número entero positivo e imprima 
	sus factores primos. Los factores primos de un número entero son los 
	números primos divisores exactos de ese número entero.*/
	int n,divisor,x;
	printf("Escribir el número: ");
	scanf("%d",&n);
	divisor = 2;
	printf("Factores primos: ");
	x = n;
	while(n>1){
		if(n%divisor==0){
			if(x==n){
				printf("%d",divisor);
			}
			else{
				printf(", %d",divisor);
			}
			n = n / divisor;
		}
		else{
			divisor++;
		}
	}
	
	return 0;
}
