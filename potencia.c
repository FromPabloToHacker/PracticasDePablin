#include <stdio.h>

int main()

{

int base,exponente,i,acum=1;

printf("dame la base de la potencia:");

scanf("%d",&base);

printf("dame el exponente de la potencia:");

scanf("%d",&exponente);

for(i=1;i<=exponente;i++)

{

acum=acum*base;

}

printf("solucion: %d",acum);

return 0;

}
