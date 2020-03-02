#include <stdio.h>

int main()

{

int m,n;

printf("Introduzca dos numeros y el mayor primero:");

do{

scanf("%i",&m);
scanf("%i",&n);

if (m<n)
{

int i,suma,parametro,a;

i=m-n;

suma=0;

a=0;

while (i>0)
{

i --;

parametro=m-a;

a ++;

suma=suma+parametro;
}

suma=suma+n;

printf("la suma es %i",suma);
}

else{

printf("ERROR\nintroduzca los parametros de nuevo: ");

}
}

while (m<=n);

return 0;
}

