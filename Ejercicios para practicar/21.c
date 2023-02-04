#include <stdio.h>

int main(int argc, char *argv[]) {
	int m,r,x,n,a,b,per;
	printf("Escribir el valor de m: ");
	scanf("%d",&m);
	printf("Escribir el valor de r: ");
	scanf("%d",&r);
	n = 1;
	if(m==0){
		printf("Entrada inválida");
	}
	else{
		for(x=1;x<=m;x++){
			n = n * x;
		}
		a = m - r;
		b = 1;
		for(x=1;x<=a;x++){
			b = b * x;
		}
		per = n / b;
		printf("Número permutación: %d",per);
	}
	
	return 0;
}
