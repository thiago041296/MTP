#include <stdio.h>

int main(){

    char frase[100], c;
    int count;

    printf("Digite a frase: ");
    gets(frase);

    for(count=0,c=frase[0];c!='\0';count++){
        c=frase[count];
    }

    printf("\nA frase tem %d caracteres", count-1);
    return 0;
}
