#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RECEBEPONTO(nome_ponto) ({scanf("%f,%f,%f", &nome_ponto.x,&nome_ponto.y,&nome_ponto.z);})

#define SOMA(npt1,npt2,npt3) ({npt3.x=npt2.x+npt1.x;\
                               npt3.y=npt2.y+npt1.y;\
                               npt3.z=npt2.z+npt1.z;})

#define DISTANCIA(ponto1,ponto2) ({sqrt(pow((ponto1.x-ponto2.x),2)+\
                                        pow((ponto1.y-ponto2.y),2)+\
                                        pow((ponto1.z-ponto2.z),2));})

struct Ponto{
    float x, y, z;
}ponto1,ponto2,ponto3;

int main()
{

    printf("Digite dois pontos: ");
    RECEBEPONTO(ponto1);
    RECEBEPONTO(ponto2);
    SOMA(ponto1,ponto2,ponto3);

    printf("\n%.1f,%.1f,%.1f;%.4f", ponto3.x, ponto3.y, ponto3.z, DISTANCIA(ponto1,ponto2));

    return 0;
}

