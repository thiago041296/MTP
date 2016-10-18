#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arq;

void recebeTexto(){

    arq = fopen("meutexto.txt","w");
    int c,tamanho=0;
    do{
        c=getchar();
        if(c!='@'){
            fputc(c,arq);
        }
    }while(c!='@');
    fclose(arq);
}

void lerTexto(){
    arq = fopen("meutexto.txt","r");
    char c;
    do{
        c=fgetc(arq);
        printf("%c",c);
    }while(c!=EOF);
    fclose(arq);
}

int main(){
    recebeTexto();
    lerTexto();
    return 0;
}
