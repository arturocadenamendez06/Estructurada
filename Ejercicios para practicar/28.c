#include <stdio.h>

int main(int argc, char *argv[]) {
	float temperatura,zfx,zx,zx2,a0,a1,respuesta,zxx;
	printf("Escribir la temperatura: ");
	scanf("%f",&temperatura);
	
	zfx = 765 + 826 + 873 + 942 + 1032;
	zx = 20.5 + 32.7 + 51 + 73.2 + 95.7;
	zx2 = 20.5*20.5 + 32.7*32.7 + 51*51 + 73.2*73.2 + 95.7*95.7;
	zxx = (20.5*765)+(32.7*826)+(51*873)+(73.2*942)+(95.7*1032);
	a0 = (zfx * zx2 - zx * zfx * 20.5) / 5 * zfx - zx*zx;
	a1 = (5 * zxx) - (zx * zfx) / 5 * zx2 * zx*zx;
	respuesta = a0 + a1;
	printf("%f\n",a0);
	printf("%f\n",a1);
	printf("Respuesta: %f", respuesta);
	return 0;
}
