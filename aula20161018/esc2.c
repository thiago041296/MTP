#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

FILE *arq;

int main(){
    srand(time(0));
    int qntd,c,x;
    char nome[30];
    printf("Digite a quantidade de dados aleatorios: ");
    scanf("%d", &qntd);
    printf("Digite o nome do arquivo: ");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arq = fopen(nome,"w");
    for(c=0;c<qntd;c++){
        x=rand()%10;
        fprintf(arq,"%d ",x);
    }
    fclose(arq);
    return 0;
}

