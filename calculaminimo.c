#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializamatriz(int *puntero,int numfils,int numcols);
int calculaminimo(int *puntero,int numfils, int numcols);

int main(){
	
	int *p,i,j,n,m,minimo;
	printf("Introduce las filas de la matriz: ");
	scanf("%d",&n);
	printf("Introduce las columnas de la matriz: ");
	scanf("%d",&m);
	
	p = (int *)malloc(sizeof(int)*n*m);
	
	inicializamatriz(p,n,m);
	minimo = calculaminimo(p,n,m);
	
	printf("El elemento mínimo de la matriz es %d \n",minimo);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("p[%d][%d] = %d\n",i,j,*(p+i*m+j));
		}
	}
	free(p);
	return 0;
}

void inicializamatriz(int *puntero,int numfils,int numcols){
	
	int i,j;
	for(i=0;i<numfils;i++){
		for(j=0;j<numcols;j++){
		}
	}
}

int calculaminimo(int *puntero,int numfils, int numcols){
	
	int i, j, min = *puntero;
	for(i=0;i<numfils;i++){
		for(j=0;j<numcols;j++){
		}
	}
	return min;
}
