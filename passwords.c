#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main (int argc, char*argv[]){

        srand(time(NULL));
        int x;

        int cifras=atoi(argv[1]);
        char min[]="abcdefghijklmnortrstuvwouz";
        char num[]="0123456789";
        char aleatorio[cifras+1];

        printf("Escriba un numero");
        printf("%d", &x);

        for(x; x<cifras; x++){
                int eleccion=(int)(rand() %3+1;
        switch(eleccion){
                case 1:
                        aleatorio[x]=min[rand() %25+1];
                                break;
                case 2:
                        aleatorio[x]=num[rand() %9+1];
                                break;
        }
        printf("%s\n", aleatorio);
        }
}

