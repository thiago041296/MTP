#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("\nO numero eh PAR;");
    }
    else{
        printf("\nO numero eh IMPAR;");
    }
    if(num%3==0){
        printf("\nO numero eh MULTIPLO DE 3;");
    }
    if(num%5==0){
        printf("\nO numero eh MULTIPLO DE 5;");
    }
    if(num%7==0){
        printf("\nO numero eh MULTIPLO DE 7;");
    }

    return 0;
}
