#include <stdio.h>

int main(){

    double fat, count, soma=1;

    printf("Digite o numero: ");
    scanf("%lf", &fat);

    for(count=1;count<=fat;count++)
        soma*=count;

    printf("\nO fatorial de %.0lf eh %.0lf", fat, soma);

    return 0;
}

