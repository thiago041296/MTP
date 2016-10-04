#include <stdio.h>

void recebeMatriz(int mat[2][4]){

    int count,count2;
    for(count=0;count<2;count++){
        for(count2=0;count2<4;count2++){
            printf("Digite o numero de posicao[%d][%d]: ",count+1,count2+1);
            scanf("%d",&mat[count][count2]);
        }
    }
}

void transpor(int mat[2][4],int mat2[4][2]){
    int count,count2;
    for(count=0;count<2;count++){
        for(count2=0;count2<4;count2++){
            mat2[count2][count]=mat[count][count2];
        }
    }
}

void imprime(int mat[2][4],int mat2[4][2]){

    int count,count2;
    printf("\n\nMatriz Inserida\n");
    for(count=0;count<2;count++){
        for(count2=0;count2<4;count2++){
            printf("%d ",mat[count][count2]);
        }
        printf("\n");
    }
    printf("\n\nMatriz Transposta\n");
    for(count=0;count<4;count++){
        for(count2=0;count2<2;count2++){
            printf("%d ",mat2[count][count2]);
        }
        printf("\n");
    }
}

int main(){

    int mat[2][4],count,count2,mat2[4][2];
    recebeMatriz(mat);
    transpor(mat,mat2);
    imprime(mat,mat2);
    return 0;
}
