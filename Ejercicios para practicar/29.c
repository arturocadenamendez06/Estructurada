#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escriba un programa que lea un número entero en el sistema de numeración octal y lo convierta a
	un número entero en decimal. (se deben separar los dígitos del número y hacer el cálculo)*/
	int numero,x,decimal,modulo,multiplicacion;
	printf("Escribir un número en el sistema octal: ");
	scanf("%d",&numero);
	multiplicacion = 1;
	decimal = 0;
	while(numero>0){
		modulo = numero % 10;
		x = modulo * multiplicacion;
		numero = numero / 10;
		decimal = decimal + x;
		multiplicacion = multiplicacion * 8;
	}
	printf("El número en decimal es %d",decimal);
	return 0;
}
