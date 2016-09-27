#include <stdio.h>

struct x{
    int den,num;
};

struct x soma(struct x vet1,struct x vet2,struct x vetR){

    if(vet1.den==vet2.den){
        vetR.num=vet1.num+vet2.num;
        vetR.den=vet1.den+vet2.den;
    }
    else{
        vet1.num*=vet2.den;
        vet2.num*=vet1.den;
        vetR.den=vet1.den*vet2.den;
        vetR.num=vet1.num+vet2.num;
    }
    return vetR;
};

int main(){

    struct x vet1,vet2,vetR;
    printf("Digite o primeiro numero racional: ");
    scanf("%d/%d",&vet1.num,&vet1.den);
    printf("Digite o primeiro numero racional: ");
    scanf("%d/%d",&vet2.num,&vet2.den);

    vetR = soma(vet1,vet2,vetR);

    printf("\nA soma dos numeros racionais eh: %d/%d", vetR.num, vetR.den);

    return 0;
}
