#include <stdio.h>

int main(int argc, char *argv[]) {
	float num;
	printf("Escribir el número: ");
	scanf("%f", &num);
	if(num < 0){
		printf("El número es incorrecto");
	}
	else{
		if(num > 5000){
			num = num + num * .25;
		}
		else{
			if(num > 3000){
				num = num + num * .15;
			}
			else{
				if(num > 1000){
					num = num + num * .05;
				}
			}
		}
		printf("El número es %f",num);
	}
	return 0;
}
