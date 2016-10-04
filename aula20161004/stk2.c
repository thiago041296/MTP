#include <stdio.h>
#include <math.h>

float media(float vet[5]){
    int count;
    float soma=0;
    for(count=0;count<5;count++){
        soma+=vet[count];
    }
    return soma/5;
}

float desvio_amostra(float vet[5]){
    int count;
    float m,soma=0.0;
    m=media(vet);
    for(count=0;count<5;count++){
        soma+=pow((vet[count]-m),2);
    }
    return sqrt(soma/(5-1));
}

float desvio_populacional(float vet[5]){
    int count;
    float m,soma=0.0;
    m=media(vet);
    for(count=0;count<5;count++){
        soma+=pow((vet[count]-m),2);
    }
    return sqrt(soma/(5));
}

int main(){

    float vet[5];
    int count;
    for(count=0;count<5;count++){
        printf("Digite o numero[%d]: ",count+1);
        scanf("%f", &vet[count]);
    }
    printf("\nMedia: %f", media(vet));
    printf("\nDesvio de amostra: %f", desvio_amostra(vet));
    printf("\nDesvio populacional: %f", desvio_populacional(vet));
    return 0;
}
