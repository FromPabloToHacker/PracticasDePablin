#include <stdio.h>
#include <stdlib.h>

int calculaMaximo(int *p, int tam);

int main(){
	
	int *p,n,i,maximo;
	printf("Introduce cuantos numeros quiere guardar en el vector: ");
	scanf("%d",&n);
	
	p=(int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		printf("Introduce el valor del %d elemento: ",i);
		scanf("%d",(p+i));
	}
	maximo = calculaMaximo(p,n);
	printf("El vector p contiene los siguientes valores: ");
	for(i=0; i<n; i++){
		printf("p[%d] = %d\n",i,*(p+i));
	}
	printf("El valor maximo es: %d\n",maximo);
	
	free(p);
	return 0;
}

int calculaMaximo(int *p, int tam){
	
	int i,max=*p;
	for(i=0; i<tam; i++){
		if(*(p+i)>max) max= *(p+i);
	}
	return max;
}
