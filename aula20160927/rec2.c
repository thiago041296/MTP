#include <stdio.h>
#include <string.h>

int soma(int *A,int N){
    if(N==0)return A[0];
    return A[N]+soma(A,N-1);
}

int main(){

    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("A soma eh: %d",soma(A,N-1));
    return 0;
}
