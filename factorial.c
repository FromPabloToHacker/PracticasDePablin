#include <stdio.h>

int main()

{

int num, f=1;

printf("dame un numero para sacar su factorial:\n");

scanf("%d",&num);

if (num<0)

{

printf("numero incorrecto");

}

else 

{

while(num>0)

{

f=num*f;

num--;
}
}
printf("el factorial de dicho numero es: %d",f);

return 0;
}
