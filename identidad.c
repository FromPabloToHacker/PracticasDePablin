#include <stdio.h>
#include <stdlib.h>
#define N 9


	void inicializarmatriz(int matriz[][N]);
	void crearmatrizdiagonal(int matriz[][N]);
	
int main(){
	
	int matriz[N][N];
	inicializarmatriz(matriz);
	crearmatrizdiagonal(matriz);
	
	return 0;
	
}

void inicializarmatriz(int matriz[][N]){
	
	int i,j;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
		matriz[i][j]=0;
	
		}
	}
       printf ("\n\n");
}

void crearmatrizdiagonal(int matriz[][N]){
	
	int i,j;
	for(i=0; i<N; i++){
	    for(j=0; j<N; j++){
	     
		if (i==j) matriz[i][j]=1;
	   }
	}
	printf("\n");
	
	    for(i=0; i<N; i++){
		printf ("\n");
		for(j=0; j<N; j++){
		
			printf("%d",matriz[i][j]);
		}
	}
	printf("\n\n");
}
