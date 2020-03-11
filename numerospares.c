#include <stdio.h>

void pares (int num1,int num2);

int main ()
{

int num1; int num2; pares;

printf("dime el primer numero: \n");

scanf("%d",&num1);

printf("dime el segundo numero: \n");

scanf("%d",&num2);

       	if (num1>=num2)
	{
	printf("ERROR\n");
	}

	else

	{

	pares(num1,num2);

	}
return 0;
	}

	void pares(int num1,int num2)
	{
	int i;
	for(i=num2; i>=num1; i--)
	{
	if (i % 2 == 0)
	{
	printf("%d\n",i);
	}
	}
	}

	
