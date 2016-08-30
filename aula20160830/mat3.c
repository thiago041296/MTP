#include <stdio.h>
#include <math.h>

int main(){

    float num,base;

    printf("Digite o numero: ");
    scanf("%f", &num);
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("O resultado eh: %.4f", (log(num)/log(base)));
    return 0;
}
