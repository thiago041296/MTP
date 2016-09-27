#include <stdio.h>
#include <string.h>

int soma(int a,int n){
    if(n==0)return 1;
    return a*(soma(a-1,n-1))/n;
}

int main(){

    int a,n;
    printf("Digite o total de bolas: ");
    scanf("%d", &a);
    printf("Digite quantas bolas quer retirar: ");
    scanf("%d", &n);
    if(a<n) printf("ERRO");
    else    printf("Resultado: %d", soma(a,n));
    return 0;
}
