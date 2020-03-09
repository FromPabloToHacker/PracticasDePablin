#include <stdio.h>
#include <math.h>
	
int suma(int num1);
	
int main()
{
int num1,resultado;
	
	printf("dame el primer numero: \n");
	scanf("%d",&num1);
	
	if(num1 <= 0)
	{
	
	printf("ERROR \n");
	}
	
	else 
	{
	
	resultado= suma(num1);
	printf("%d\n",resultado);
	
	}
	
	return 0;
	}
	
	int suma(int num1)
	{
	int i;
	int resultado=0;
	
	for (i=0; i<=num1; i++)
	{
	
	resultado= resultado + i;
	
	}
	
	return(resultado);
	}
	
