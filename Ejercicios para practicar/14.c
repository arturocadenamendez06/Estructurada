#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escriba un programa que reciba tres calificaciones de un estudiante y devuelva el promedio, la máxima y la mínima calificación.*/
	float calificacion1,calificacion2,calificacion3,mayor,menor,promedio;
	printf("Escribir la primera calificación: ");
	scanf("%f",&calificacion1);
	printf("Escribir la segunda calificación: ");
	scanf("%f",&calificacion2);
	printf("Escribir la tercera calificación: ");
	scanf("%f",&calificacion3);
	promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
	mayor = calificacion1;
	menor = calificacion1;
	if(mayor < calificacion2){
		if(calificacion2 > calificacion3){
			mayor = calificacion2;
			if(calificacion3 < menor){
				menor = calificacion3;
			}
		}
		else{
			mayor = calificacion3;
		}
	}
	else{
		if(mayor < calificacion3){
			mayor = calificacion3;
			menor = calificacion2;
		}
		else{
			if(calificacion2 < calificacion3){
				menor = calificacion2;
			}
			else{
				menor = calificacion3;
			}
		}
	}
	printf("Promedio = %.2f, máxima= %.2f, menor=%.2f",promedio,mayor,menor);
	return 0;
}
