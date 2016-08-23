#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    area = lado*lado;

    printf("\nA area do quadrado eh: %d\n\n", area);

    return 0;
}
