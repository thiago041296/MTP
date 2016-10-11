#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *recebeTexto(char *str){

    int c,tamanho=0;
    do{
        c=getchar();
        if(c!='@'){
            tamanho++;
            str[tamanho-1]=c;
            str = realloc(str,(tamanho+1)*sizeof(char));
            str[tamanho]='\0';
        }
    }while(c!='@');
    return str;
}

int main(){

    char *str = (char *) malloc(sizeof(char));
    str[0] = '\0';
    printf("Entre com o texto: ");
    str = recebeTexto(str);
    printf("%s",str);
    return 0;
}

