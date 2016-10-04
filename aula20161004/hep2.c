#include <stdio.h>
#include <stdlib.h>

void recebeMatriz(int **mat,int num_lin, int num_col){

    int count,count2;
    for(count=0;count<num_lin;count++){
        for(count2=0;count2<num_col;count2++){
            printf("Digite o numero de posicao[%d][%d]: ",count+1,count2+1);
            scanf("%d",&mat[count][count2]);
        }
    }
}

void transpor(int **mat,int **mat2,int num_lin,int num_col){
    int count,count2;
    for(count=0;count<num_lin;count++){
        for(count2=0;count2<num_col;count2++){
            mat2[count2][count]=mat[count][count2];
        }
    }
}

void imprime(int **mat,int **mat2,int num_lin,int num_col){

    int count,count2;
    printf("\n\nMatriz Inserida\n");
    for(count=0;count<num_lin;count++){
        for(count2=0;count2<num_col;count2++){
            printf("%d ",mat[count][count2]);
        }
        printf("\n");
    }
    printf("\n\nMatriz Transposta\n");
    for(count=0;count<num_col;count++){
        for(count2=0;count2<num_lin;count2++){
            printf("%d ",mat2[count][count2]);
        }
        printf("\n");
    }
}

int main(){

    int count,count2,num_lin,num_col;
    printf("Digite o numeros de linhas da matriz: ");
    scanf("%d", &num_lin);
    printf("Digite o numeros de colunas da matriz: ");
    scanf("%d", &num_col);
    int **mat = (int**) calloc((num_lin*num_col),sizeof(int));
    int **mat2 = (int**) calloc((num_lin*num_col),sizeof(int));
    recebeMatriz(mat,num_lin,num_col);
    transpor(mat,mat2,num_lin,num_col);
    imprime(mat,mat2,num_lin,num_col);
    free(mat);
    free(mat2);
    return 0;
}

