#include <stdio.h>

int main()
{
	int num;

	printf("dame un numero\n");

	scanf("%d",&num);
	
	if (num%2==0)
	{
		printf("tu numero es par");
	}
	else 
	{ 
		printf("tu numero es impar");	
	}		
	
	return 0;
}	
