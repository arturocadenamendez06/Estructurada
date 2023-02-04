#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Números amigos*/
	int numero,divisor,numero2,sumatoria,sumatoria2,i;
	printf("Escribir el primer número: ");
	scanf("%d",&numero);
	printf("Escribir el segundo número: ");
	scanf("%d",&numero2);
	sumatoria = 0;
	for(i=1;i<numero;i++){
		divisor = numero % i;
		if(divisor==0){
			sumatoria = sumatoria + i;
		}
	}
	sumatoria2 = 0;
	if(sumatoria==numero2){
		for(i=1;i<numero2;i++){
			divisor = numero2 % i;
			if(divisor==0){
				sumatoria2 = sumatoria2 + i;
			}
		}
		if(sumatoria2==numero){
			printf("Los números son amigos");
		}
		else{
			printf("Los números no son amigos");
		}
	}
	else{
		printf("Los números no son amigos");
	}
	return 0;
}
