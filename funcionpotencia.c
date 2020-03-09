#include <stdio.h>
#include <math.h>

float area(float num1,float num2);

int main()

{

	float num1,num2,funcion;
	
	printf("dime el primer numero: \n");
	scanf("%f",&num1);
	
	printf("dime el segundo numero: \n");
	scanf("%f",num2);
	
	if(num1 && num2 <= 0)
	{
	printf("ERROR \n");
	}
	
	else
	{
	
	funcion=area(num1,num2);
	
	printf("el area es: %f\n",funcion);
	
	}
	
	return 0;
	
	}
	
	float area(float num1,float num2);
	{
	
	float resultado;
	
	resultado=pow(num1,num2);
	
	return(resultado);
	}
	
