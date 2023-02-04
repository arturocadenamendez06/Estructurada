#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,i,x,z;
	printf("Escribir el número de filas del triángulo: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(x=1;x<=i;x++){
			printf("%d",x%10);
		}
		printf("\n");
	}
	return 0;
}
