#include <stdio.h>
#include <complex.h>

int main(){

    int r1,r2,i1,i2;
    double complex z1,z2,z3;

    printf("Digite parte real do numero 1: ");
    scanf("%d", &r1);
    printf("Digite parte imaginaria do numero 1: ");
    scanf("%d", &i1);
    printf("Digite parte real do numero 2: ");
    scanf("%d", &r2);
    printf("Digite parte imaginaria do numero 2: ");
    scanf("%d", &i2);

    z1=r1+i1*I;
    z2=r2+i2*I;

    z3=z2+z1;

    printf("\nResultado: %.0lf + %.0lf*I\n",creal(z3),cimag(z3));

    return 0;
}

