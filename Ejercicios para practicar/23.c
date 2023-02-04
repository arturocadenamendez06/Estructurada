#include <stdio.h>

int main(int argc, char *argv[]) {
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
