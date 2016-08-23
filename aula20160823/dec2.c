#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int num, num2;

    printf("Digite um numero: ");
    scanf("%d", &num);

    num2=rand()%2;

    if((num+num2)%2==0){
        printf("O numero digitado + o numero sorteado %d eh PAR", num2);
    }
    else{
        printf("O numero digitado + o numero sorteado %d eh IMPAR", num2);
    }
    return 0;
}
