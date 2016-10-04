#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *vet,int num){
    int count;
    float soma=0;
    for(count=0;count<num;count++){
        soma+=vet[count];
    }
    return soma/num;
}

float desvio_amostra(float *vet,int num){
    int count;
    float m,soma=0.0;
    m=media(vet,num);
    for(count=0;count<num;count++){
        soma+=pow((vet[count]-m),2);
    }
    return sqrt(soma/(num-1));
}

float desvio_populacional(float *vet,int num){
    int count;
    float m,soma=0.0;
    m=media(vet,num);
    for(count=0;count<num;count++){
        soma+=pow((vet[count]-m),2);
    }
    return sqrt(soma/(num));
}

int main(){

    int count,num;
    printf("Digite quantos numeros deseja digitar: ");
    scanf("%d", &num);
    float *vet = (float*) calloc(num,sizeof(float));
    for(count=0;count<num;count++){
        printf("Digite o numero[%d]: ",count+1);
        scanf("%f", &vet[count]);
    }
    printf("\nMedia: %.4f", media(vet,num));
    printf("\nDesvio de amostra: %.4f", desvio_amostra(vet,num));
    printf("\nDesvio populacional: %.4f", desvio_populacional(vet,num));
    free(vet);
    return 0;
}

