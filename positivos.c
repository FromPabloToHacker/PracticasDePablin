#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMFILS 6
#define NUMCOLS 6

void inicializaMatriz(int matriz[][NUMCOLS]); //Primero definimos y luego se la enviamos a main
void imprime(int matriz[][NUMCOLS]);
void positivos(int matriz [][NUMCOLS]);

int main(){
	
	int matriz[NUMFILS][NUMCOLS];
	inicializaMatriz(matriz);
	imprime(matriz);
	 positivos(matriz);
	
	return 0;	
}

void inicializaMatriz(int matriz[][NUMCOLS]){
	
	int i,j;
	int n;
	srand(time(NULL));
	n=rand()%200 -100;
	for(i=0; i<NUMFILS; i++){
		for(j=0; j<NUMCOLS; j++){
		}
	printf("\n");	
	}
		
}

void imprime(int matriz[][NUMCOLS]){
	
	int i,j;
	
	for(i=0;i<NUMFILS;i++){
		for(j=0;j<NUMCOLS;j++){
			printf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
}

void positivos(int matriz [][NUMCOLS]){
	
	
	int i,j,cont;
	
	
	for(i=0; i<NUMFILS; i++){
		if (cont>0)
			{
				cont ++;
			}
		for(j=0; j<NUMCOLS; j++){
			
		}
		printf("Fila %d || Positivos son: %d\n",i,positivos);
	}
	
	
}


