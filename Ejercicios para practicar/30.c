#include <stdio.h>

int main(int argc, char *argv[]) {
	int decimal,modulo,total=0,d,n;
	printf("Escribir el número en decimal: ");
	scanf("%d",&decimal);
	d = 1;
	while(decimal>8){
		modulo = decimal % 8;
		n = d*modulo;
		decimal = decimal / 8;
		total = total + n;
		d = d * 10;
	}
	decimal = decimal * d;
	total = total + decimal;
	printf("Número en octal: %d",total);
	return 0;
}

