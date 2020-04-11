#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 9

void inicializarMatriz(int matriz[][N]);
void matrizDiagonal(int matriz[][N]);
void visualizarMatriz(int matriz[][N]);

int main (){
	
	int matriz[N][N];
	inicializarMatriz(matriz);
	matrizDiagonal(matriz);
	visualizarMatriz(matriz);
	
	return 0;
}

void inicializarMatriz(int matriz[][N]){
	
	int i,j;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			
			matriz[i][j] = 0; 
			
		}
	}
}

void matrizDiagonal(int matriz[][N]){
	
	int i,j;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			
			if(i==j) matriz [i][j]=1;
			
		}
	}
}

void visualizarMatriz(int matriz[][N]){
	
	int i,j;

	for(i=0; i<N; i++){
		printf("\n");	
		for(j=0; j<N; j++){
			
			printf (" %d", matriz[i][j]);
			
		}
	}
}		
