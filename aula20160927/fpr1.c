#include <stdio.h>

void preencher(int *A, int *B){
    printf("Digite dois numeros: ");
    scanf("%d%d", A, B);
}

int main(){

    int A, B;
    preencher(&A, &B);
    printf("Quociente: %d   Resto: %d", A/B,A%B);
    return 0;
}

