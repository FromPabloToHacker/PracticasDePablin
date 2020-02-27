#include <stdio.h>

int main()
{

	int mes;
	
	printf("dame un mes\n");
	
	scanf("%d",&mes);
	
	switch(mes)
	{
	
	case 1:
		printf("enero\n");
		break;

	case 2:
		printf("febrero\n");
		break;
	case 3:
		printf("marzo\n");
		break;
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	default: printf("error");
	}
}
	
	
	

