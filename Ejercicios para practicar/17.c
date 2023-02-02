#include <stdio.h>

int main(int argc, char *argv[]) {
	/*El equipo de futbol soccer VENADOS requiere llevar un conteo de las acciones que realiza durante un
	juego, las acciones están catalogadas como sigue: 1)Tiro a gol, 2)Tiro desviado, 3)Falta recibida,
	4)Falta cometida, 5)Gol anotado, 6)Gol recibido, 7)Amonestado, 8)Expulsado, 0)Fin del juego.
	Elaborar un programa que permita capturar las acciones que se den en el partido, por cada acción se
	debe introducir el número de acción correspondiente, al escribir la acción 0, se deben imprimir las
	estadísticas del juego.*/
	
	float r1,r2,a1,a2,a;
	printf("Escribir el primer radio (circunferencia interna): ");
	scanf("%f",&r1);
	printf("Escribir el segundo radio (circunferencia externa): ");
	scanf("%f",&r2);
	if(r1 >= r2){
		printf("El radio interno no puede ser mayor que el externo");
	}
	else{
		a1 = 3.1416 * r1 * r1;
		a2 = 3.1416 * r2 * r2;
		a = a2 - a1;
		printf("Area sombreada: %.4f",a);
	}
	return 0;
}
