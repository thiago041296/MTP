#include <stdio.h>

int main(){

    int num,count,soma=0;

    printf("Digite o numero: ");
    scanf("%d", &num);

    for(count=1;count<num;count++){
        if(num%count==0)
            soma+=count;
    }

    if(soma==num)printf("O numero %d eh um NUMERO PERFEITO", num);
    else printf("O numero %d NAO eh um NUMERO PERFEITO", num);

    return 0;
}
