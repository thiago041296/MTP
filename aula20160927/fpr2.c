#include <stdio.h>
#include <string.h>

void retiraChar(char *frase){

    int count,count2,aux=0;
    for(count=0;frase[count]!='\0';count++){
        if(aux){
            count=0;
            aux=0;
        }
        if(!(isalpha(frase[count]))){
            for(count2=count;frase[count2]!='\0';count2++){
                frase[count2]=frase[count2+1];
            }
            if(count==0)aux=1,count=-1;
            else count--;
        }

    }
}

int main(){

    char frase[50];
    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);
    retiraChar(frase);
    puts(frase);
    return 0;
}
