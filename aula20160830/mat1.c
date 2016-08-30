#include <stdio.h>
#include <math.h>

int main(){

    float x1,y1,x2,y2,d;

    printf("Digite a x1: ");
    scanf("%f", &x1);
    printf("Digite a y1: ");
    scanf("%f", &y1);
    printf("Digite a x2: ");
    scanf("%f", &x2);
    printf("Digite a y2: ");
    scanf("%f", &y2);

    d=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));

    printf("O resultado eh: %.4f", d);
    return 0;
}
