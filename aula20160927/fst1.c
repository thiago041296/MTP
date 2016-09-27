#include <stdio.h>

struct x{
    int quo,res;
};

struct x quociente_resto(struct x Y, int A, int B){
    Y.quo=A/B;
    Y.res=A%B;
    return Y;
}

int main(){

    struct x X;
    int A, B;
    printf("Digite dois numeros: ");
    scanf("%d%d", &A, &B);

    X=quociente_resto(X,A,B);

    printf("Quociente:%d    Resto:%d",X.quo,X.res);

    return 0;
}
