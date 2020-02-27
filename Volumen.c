#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

int main()
{
	int opcion = 0;

	printf("Si quiere calcular el volumen de un cono, pulse 1.\nSi quiere calcular el volumen de un ortoedro pulse 2\n> ");
	scanf("%d", &opcion);

	if(opcion == 1)
	{
		float radioCono = 1.0;
		float alturaCono = 1.0;
		float volCono = 1.0;

		printf("Por favor, introduzca el radio del cono: \n");
		scanf("%f", &radioCono);

		printf("Ahora introduzca la altura: \n");
		scanf("%f", &alturaCono);

		volCono = 1.0 / 3.0 * PI * pow(radioCono, 2) * alturaCono;

		printf("El volumen del cono es: %f\n", volCono);
	}
	else if(opcion == 2)
	{
		float lado1 = 0.0;
		float lado2 = 0.0;
		float alturaOrto = 0.0;
		float volOrto = 0.0;

		printf("Por favor, introduzca el lado 1 del ortoedro: \n");
		scanf("%f", &lado1);

		printf("Por favor, introduzca el lado 2 del ortoedro: \n");
		scanf("%f", &lado2);

		printf("Ahora introduzca la altura: \n");
		scanf("%f", &alturaOrto);

		volOrto = lado1 * lado2 * alturaOrto;

		printf("El volumen del ortoedro es: %f\n", volOrto);
	}
	else
	{
		printf("La opción escogida no es correcta\n");
	}

	return 0;
}