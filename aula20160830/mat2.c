#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,angulo;

    printf("Digite o lado b: ");
    scanf("%f", &b);
    printf("Digite o lado c: ");
    scanf("%f", &c);
    printf("Digite o angulo entre os lados: ");
    scanf("%f", &angulo);

    a=sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(angulo));

    printf("O resultado eh: %.4f", a);
    return 0;
}
