#include <stdio.h>

int main()

{

int dias,horas,minutos,segundos;

printf("dame la cantidad de segundos que quieras convertir");

scanf("%d",&segundos);

dias =segundos/86400;

segundos%=86400;

horas=segundos/3600;

segundos%=3600;

minutos=segundos/60;

segundos%=60;

printf("dias %d, horas %d, minutos %d, segundos %d", dias,horas,minutos,segundos);

return 0;

}
