#include <stdio.h>

int main(){

    srand(time(0));
    int numSort=rand()%100, num, count=0, sair=1;

    while(sair){

        printf("\nDigite o numero: ");
        scanf("%d", &num);

        if(num==numSort){
            sair=0;
        }
        else{
            if(num<numSort) printf("baixo");
            else printf("alto");
        }
        count++;
    }

        printf("Voce acertou o numero %d com %d tentativas!", numSort, count);

        return 0;
}
