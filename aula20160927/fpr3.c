#include <stdio.h>
#include <string.h>

void comum(int *A,int *B,int n,int m){
    int count1,count2;
    for(count1=0;count1<n;count1++){
        for(count2=0;count2<m;count2++){
            if(A[count1]==B[count2]){
                printf("%d, ",B[count2]);
            }
        }
    }
}

int main(){

    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    comum(A,B,n,m);
    return 0;
}
