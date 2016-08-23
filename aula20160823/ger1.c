#include <stdio.h>

int main(){

    int primo, count,c=0;

    printf("Digite o numero: ");
    scanf("%d", &primo);

    for(count=1;count<=primo;count++){
        if(primo%count==0) c++;
    }
    if(c==2) printf("O numero eh PRIMO");
    else printf("O numero NAO eh PRIMO");

    return 0;
}
