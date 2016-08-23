#include <stdio.h>
#include <time.h>

int main(){

    srand(time(0));

    int num1, num2, num3, soma;

    num1=1+rand()%6;
    num2=1+rand()%6;
    num3=1+rand()%6;

    soma=num1+num2+num3;

    if(soma==7||soma==11){
        printf("\nSeus dados deram %d, %d e %d e totalizaram %d.", num1, num2, num3, soma);
        printf("\nVoce ganhou!!!");
    }
    else{
        printf("\nSeus dados deram %d, %d e %d e totalizaram %d.", num1, num2,num3, soma);
        printf("\nVoce perdeu!!!");
    }

return 0;
}
