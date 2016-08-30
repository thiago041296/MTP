#include <stdio.h>

int main(){

    int count,n;
    double num2,total2;
    float num,total;

    printf("Digite o numero: ");
    scanf("%d", &n);

    num=1.0/n;

    for(count=0;count<729;count++){
        total+=num;
    }

    printf("\nO resultado em float eh:  %.15f",total);

    num2=1.0/n;

    for(count=0;count<729;count++){
        total2+=num2;
    }

    printf("\nO resultado em double eh: %.15f",total2);

    return 0;
}
