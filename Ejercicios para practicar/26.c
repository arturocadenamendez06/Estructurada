#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Hacer un programa que lea un número entero n y que imprima cada uno de sus dígitos en el orden
	del dígito más significativo al menos significativo.*/
	int num,p,reversa,x;
	printf("Escribir un número: ");
	scanf("%d",&num);
	reversa = 0;
	while(num!=0){
		p = num%10;
		reversa = reversa*10+p;
		num = num / 10;
	}
	
	while(reversa!=0){
		x = reversa % 10;
		printf("%d,",x);
		reversa = reversa / 10;
	}
	return 0;
}
