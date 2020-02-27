#include <stdio.h>

int main()
{
	int nota;

	printf("Introduzca su nota: \n");
	scanf("%d", &nota);

	if(nota < 5)
	{
		printf("SUSPENSO\n");
	}
	else if(nota >= 5 && nota <= 6)
	{
		printf("APROBADO\n");
	}
	else if(nota >= 7 && nota <= 8)
	{
		printf("NOTABLE\n");
	}
	else
	{
		printf("SOBRESALIENTE\n");
	}

	return 0;
}