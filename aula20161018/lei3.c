#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arq;

struct Ponto{
    int x,y;
};

typedef struct Ponto PONTO;

int main(){

    int c,somaX=0,somaY=0,auxX=0,auxY=0;
    char nome[30];
    PONTO ponto[50];
    printf("Digite o nome do arquivo: ");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arq = fopen(nome,"w");
    while(!feof(arq)){
        fscanf(arq,"%d %d\n",ponto[c].x,ponto[c].y);
        somaX+=ponto[c].x;auxX++;
        somaY+=ponto[c].y;auxY++;
    }
    printf("\nCentroide = (%.1f,%.1f)",(float)somaX/auxX,(float)somaY/auxY);
    fclose(arq);
    return 0;
}

