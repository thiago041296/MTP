#include <stdio.h>

int main(){

    int B,P, prod=1, count;

    printf("Digite o numero base: ");
    scanf("%d", &B);

    printf("Digite o numero potencia: ");
    scanf("%d", &P);

    for(count=1;count<=P;count++)
        prod*=B;

    printf("\nO numero %d elevado a %d eh %d", B, P, prod);

    return 0;
}

