#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%d", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    area = base*altura/2;

    printf("\nA area do triangulo eh: %d\n\n", area);

    return 0;
}
