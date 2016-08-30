#include <stdio.h>
#include <ctype.h>

int main(){

    int count,l=0;
    char frase[100];
    printf("Digite a frase: ");
    gets(frase);
    for(count=0;frase[count]!='\0';count++)
        if(isalpha(frase[count]))
            l++;
    printf("A sua frase tem %d caracteres!", l);
    return 0;
}

