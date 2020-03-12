#include <stdio.h>
#include <math.h>

float potencia(float num1,float num2);

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
	
	funcion=potencia(num1,num2);//estamos llamando a la funcion e indicando que lo que nos devuelva se guardara en la variable función.
	
	printf("el area es: %f\n",funcion);
	
	}
	
	return 0;
	
	}
	
	float potencia(float num1,float num2);
	{
	
	float resultado;
	
	resultado=pow(num1,num2);
	
	return(resultado);// nos devuelve a nuestro printf.
	}
	
