#include <stdio.h>
int divisores(int a);

int main()
{
	int num1,cont;
	printf("dame un numero\n");
	scanf("%d",&num1);
	
	cont=divisores(num1);
	printf("el numero de divisores es %d\n",cont);
	
	}
	
	int divisores(int a)
 {
	int i;
	int cont=i;
	for(i=1;i<=a;i++)
	{
	
	if(a%i==0)
	
	{
	
	divisores=a/i;
	
	printf("%d\n",divisores);
	
	cont++;
	}
	
	printf("%d",a);
	return (cont);
	}
	return 0;
	}

