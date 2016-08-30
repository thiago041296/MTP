#include <stdio.h>
#include <ctype.h>

int main(){

    int count;
    char frase[100];
    printf("Digite a frase: ");
    gets(frase);
    for(count=0;frase[count]!='\0';count++)
        frase[count] = tolower(frase[count]);
    system("cls");
    puts(frase);
    return 0;
}
