#include <stdio.h>

int main(){

    int fat, count, soma=1;

    printf("Digite o numero: ");
    scanf("%d", &fat);

    for(count=1;count<=fat;count++)
        soma*=count;

    printf("\nO fatorial de %d eh %d", fat, soma);

    return 0;
}

