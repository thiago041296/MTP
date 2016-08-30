#include <stdio.h>
#include <complex.h>

int main(){

    int r1,i1;
    double complex z1;

    printf("Digite parte real do numero 1: ");
    scanf("%d", &r1);
    printf("Digite parte imaginaria do numero 1: ");
    scanf("%d", &i1);


    z1=r1+i1*I;
    z1=csqrt(z1);


    printf("\nResultado: %.1lf + %.1lf*I\n",creal(z1),cimag(z1));

    return 0;
}

