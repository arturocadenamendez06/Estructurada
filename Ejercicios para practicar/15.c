#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Escriba un programa que reciba tres calificaciones de un estudiante y devuelva el promedio, la*/
	/*máxima y la mínima calificación.*/
  
	int accion, tirog=0,tirod=0,fr=0,fc=0,ga=0,gr=0,a=0,e=0;
	
	do{
		printf("Escribir la acción: ");
		scanf("%d",&accion);
		switch(accion){
		case 1:
			tirog = tirog + 1;
			break;
		case 2:
			tirod = tirod + 1;
			break;
		case 3:
			fr = fr + 1;
			break;
		case 4:
			fc = fc + 1;
			break;
		case 5:
			ga = ga + 1;
			break;
		case 6:
			gr = gr + 1;
			break;
		case 7:
			a = a + 1;
			break;
		case 8:
			e = e + 1;
			break;
		}
	} while(accion != 0);
	printf("Tiro a gol: %d\n",tirog);
	printf("Tiro desviado: %d\n",tirod);
	printf("Falta recibida: %d\n",fr);
	printf("Falta cometida: %d\n",fc);
	printf("Gol anotado: %d\n",ga);
	printf("Gol recibido: %d\n",gr);
	printf("Amonestado: %d\n",a);
	printf("Expulsado: %d\n",e);
	return 0;
}
