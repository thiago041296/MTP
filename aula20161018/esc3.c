#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arq;

struct Ponto{
    int x,y;
};

typedef struct Ponto PONTO;

int main(){

    int qntd,c,x,y;
    char nome[30];
    printf("Digite a quantidade de pontos que deseja registrar: ");
    scanf("%d", &qntd);
    PONTO *ponto = (PONTO*) malloc(qntd*sizeof(PONTO));
    printf("Digite o nome do arquivo: ");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arq = fopen(nome,"w");
    for(c=0;c<qntd;c++){
        printf("\nDigite o x do Ponto[%d]: ",c+1);
        scanf("%d",&ponto[c].x);
        printf("\nDigite o y do Ponto[%d]: ",c+1);
        scanf("%d",&ponto[c].y);
        fprintf(arq,"%d %d\n",ponto[c].x,ponto[c].y);
    }
    free(ponto);
    fclose(arq);
    return 0;
}


