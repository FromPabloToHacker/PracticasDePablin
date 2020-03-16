#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distancia(double pinicial[],double pfinal[]);;

int main(){

	int i;
	double dist,pinicial[-2],pfinal[2];

	printf("introduce las coordenadas del origen (x,y):\n");
		
		for(i=0;i<2;i++){
	
		scanf("%d",&pinicial[i]);
	}
	
	printf("introduce las coordenadas de destino (x,y):\n");
		
		for(i=0;i<2;i++){
	
		scanf("%d",&pfinal[i]);
	}
	
	dist=distancia(pinicial,pfinal);
	
	printf ("la distancia entre dos puntos es: %d \n",dist);
	
	return 0;
	}
	
double distancia(double pinicial[2],double pfinal[2]){
	
	double dist,cuadrados=0.0;
	int i;
	
	for(i=0;i<2;i++){
	
		cuadrados=pow(pinicial[i] - pfinal[i], 2);
	
	}
	
	return dist; 
	}
