#include <stdio.h>
#include <stdlib.h>

int total=0;

int desejo();

float media(int *vet);

int maior(int *vet);

int menor(int *vet);

int main(){

    int num;
    int *vet = (int*) malloc(sizeof(int));
    do{
        printf("\nDigite um novo numero: ");
        scanf("%d",&num);
        total++;
        vet = realloc(vet,total*sizeof(int));
        vet[total-1]=num;
        printf("\nA media dos numeros eh: %.2f", media(vet));
        printf("\nO maior numero eh: %d", maior(vet));
        printf("\nO menor numero eh: %d", menor(vet));
    }while(desejo());
    return 0;
}

int desejo(){//condiçao de saida
    int aux;
    printf("\n\nDeseja inserir mais um numero (1-Sim/0-Nao): ");
    scanf("%d",&aux);
    return aux;
}

float media(int *vet){

    int count,soma=0;
    for(count=0;count<total;count++){
        soma+=vet[count];
    }
    return (float)soma/total;
}

int maior(int *vet){

    int count,aux;
    for(count=0,aux=vet[0];count<total;count++){
        if(aux<vet[count]) aux=vet[count];
    }
    return aux;
}

int menor(int *vet){

    int count,aux;
    for(count=0,aux=vet[0];count<total;count++){
        if(aux>vet[count]) aux=vet[count];
    }
    return aux;
}
