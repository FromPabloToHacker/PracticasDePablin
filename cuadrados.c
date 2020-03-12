#include <stdio.h>
#include <math.h>
	
int cuadrados(int a);
int main()
{
	
	int num1,suma;
	printf("dame un numero\n");
	scanf("%d",&num1);
	
	
	if(num1<=0)
	{
	printf("-1\n");
	}
	else
	{
	suma=cuadrados(num1);	
	
	printf("la suma es: %d\n",suma);
	}
	}
	
	int cuadrados(int a)
	{
	
	int i,potencia;
	int suma=0;
	
	for(i=0;i<=a;i++)
	{	
	
	potencia=pow(i,2);
	
	suma=suma+potencia;
	
	}
	
	return suma;
}
