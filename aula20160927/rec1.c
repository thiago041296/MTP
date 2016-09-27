#include <stdio.h>
#include <string.h>

void reverso(char *frase,int n){
    if(n==0)printf("%c",frase[0]);
    else {
        printf("%c",frase[n]);
        return reverso(frase,n-1);
    }
}

int main(){

    char frase[50];
    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);
    reverso(frase,strlen(frase)-1);
    return 0;
}

