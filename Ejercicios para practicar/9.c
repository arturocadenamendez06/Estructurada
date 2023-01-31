#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	printf("Escribir el año: ");
	scanf("%d", &a);
	if(a%4==0){
		if(a%100==0){
			if(a%400==0){
				printf("El año es bisiesto");
			}
			else{
				printf("El año no es bisiesto");
			}
		}
		else{
			printf("El año es bisiesto");
		}
	}
	else{
		printf("El año no es bisiesto");
	}
	return 0;
}
