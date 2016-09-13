#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RECEBEPONTO(nome_ponto) ({scanf("%f,%f", &nome_ponto.x,&nome_ponto.y);})

#define SOMA(npt1,npt2,npt3) ({npt3.x=npt2.x+npt1.x;\
                               npt3.y=npt2.y+npt1.y;})

#define DISTANCIA(ponto1,ponto2) ({sqrt(pow((ponto1.x-ponto2.x),2)+pow((ponto1.y-ponto2.y),2));})

struct Ponto{
    float x, y;
}ponto1,ponto2,ponto3;

int main()
{
    float distancia;
    printf("Digite dois pontos: ");
    RECEBEPONTO(ponto1);
    RECEBEPONTO(ponto2);
    SOMA(ponto1,ponto2,ponto3);

    printf("\n%.1f,%.1f;%.4f", ponto3.x, ponto3.y, DISTANCIA(ponto1,ponto2));

    return 0;
}

