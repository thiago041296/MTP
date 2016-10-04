#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recebeTexto(char *str){

    int c,tamanho=1;
    do{
        c=getchar();
        if(c!='@'){
            str[tamanho-1]=c;
            tamanho++;
            str = realloc(str,tamanho*sizeof(char));
            str[tamanho-1]='\0';
        }
    }while(c!='@');
}

int main(){

    char *str = (char *) malloc(sizeof(char));
    str[0] = '\0';
    printf("Entre com o texto: ");
    recebeTexto(str);
    printf("%s",str);
    return 0;
}

