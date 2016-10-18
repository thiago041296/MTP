#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arq;

int main(){
    int qntd,c,x;
    char nome[30];
    printf("Digite o nome do arquivo que deseja ler: ");
    fflush(stdin);
    gets(nome);
    strcat(nome,".txt");
    arq = fopen(nome,"r");
    while(!feof(arq)) {
        fscanf(arq,"%d",&x);
        printf("%d ",x);
    }
    fclose(arq);
    return 0;
}
