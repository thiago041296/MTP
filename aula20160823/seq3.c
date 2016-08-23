#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, A, B, C;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &A);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &B);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &C);

    media=(A*2.0+B*3.0+C*5.0)/10.0;

    printf("A media do aluno com todos os pesos eh: %.2f", media);

    return 0;
}
