#include <stdio.h>

int main(int argc, char *argv[]) {
	int num,i,x,espacio;
	printf("Escribir el número de filas: ");
	scanf("%d",&num);
	espacio = 1;
	printf(" \n");
	while(num>=1){
		i = 1;
		x = 1;
		while(i<=num){
			printf("*");
			i++;
		}
		printf("\n");
		while(x<=espacio){
			printf(" ");
			x++;
		}
		num = num - 1;
		espacio++;
	}
	return 0;
}
