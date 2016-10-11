#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int totalp=0,totalv=0;

typedef struct PRODUTO{
    char nome[33];
    float preco;
    int codigo;
}Produto;

typedef struct VENDAS{
    int quantidade;
    char produto[33];
}Vendas;

void ver(){


}

int menu(){

    int op;
    system("clear");
    printf("\nMENU\
           \n1-Ver todos produtos\
           \n2-Incluir produto\
           \n3-Excluir produto\
           \n4-Ver todas vendas\
           \n5-Incluir venda\
           \n6-Excluir venda\
           \n0-Sair\
           \n\nDigite a opcao desejada: ");
    scanf("%d", &op);
    return op;
}

void VerProd(Produto *prod){

    int count;
    for(count=0;count<totalp;count++){
        printf("\nPRODUTO %d\
               \nNome: ",count+1);
        puts(prod[count].nome);
        printf("Preco: %.2f",prod[count].preco);
        printf("\nCodigo: %d\n\n",prod[count].codigo);
    }
    system("pause");
}

Produto *IncProd(Produto *prod){
    totalp++;
    prod = realloc(prod, totalp*sizeof(Produto));
    printf("\nDigite o nome do novo produto: ");
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
    gets(prod[totalp-1].nome);
    printf("\nDigite o preco do novo produto: ");
    scanf("%f",&prod[totalp-1].preco);
    printf("\nDigite o codigo do novo produto: ");
    scanf("%d",&prod[totalp-1].codigo);
    return prod;
}

Produto *ExcProd(Produto *prod){

    int count,count1;
    char name[33];
    printf("\nDigite o nome do produto que deseja excluir: ");
    fflush(stdin);
    gets(name);
    for(count=0;count<totalp;count++){
        if(strcmp(name,prod[count].nome)==0){
            for(count1=count;count1<totalp;count1++){
                strcpy(prod[count].nome,prod[count+1].nome);
                prod[count].preco=prod[count+1].preco;
                prod[count].codigo=prod[count+1].codigo;
            }
        }
    }
    totalp--;
    prod = realloc(prod, totalp*sizeof(Produto));
    return prod;
}

void VerVen(Vendas *venda){

    int count;
    for(count=0;count<totalv;count++){
        printf("\nVENDA %d\
               \nProduto: ",count+1);
        puts(venda[count].produto);
        printf("Quantidade: %d\n\n",venda[count].quantidade);
    }
    system("pause");
}

Vendas *IncVen(Vendas *venda){
    totalv++;
    venda = realloc(venda, totalv*sizeof(Vendas));
    printf("\nDigite o produto vendido: ");
    fflush(stdin);
    fflush(stdin);
    fflush(stdin);
    gets(venda[totalv-1].produto);
    printf("\nDigite a quantidade vendida: ");
    scanf("%d",&venda[totalv-1].quantidade);

    return venda;
}

Vendas *ExcVen(Vendas *venda){

    int count,count1;
    char name[33];
    printf("\nVoce quer excluir a venda de qual produto: ");
    fflush(stdin);
    gets(name);
    for(count=0;count<totalv;count++){
        if(strcmp(name,venda[count].produto)==0){
            for(count1=count;count1<totalv;count1++){
                strcpy(venda[count].produto,venda[count+1].produto);
                venda[count].quantidade=venda[count+1].quantidade;
            }
        }
    }
    totalv--;
    venda = realloc(venda, totalv*sizeof(Vendas));
    return venda;
}

int main(){

    Produto *prod = (Produto*) malloc(sizeof(Produto));
    Vendas *venda = (Vendas*) malloc(sizeof(Vendas));
    int sair;
    do{
        switch(sair=menu()){

            case 0:
                break;

            case 1:
                VerProd(prod);
                break;

            case 2:
                prod=IncProd(prod);
                break;

            case 3:
                ExcProd(prod);
                break;

            case 4:
                VerVen(venda);
                break;

            case 5:
                IncVen(venda);
                break;

            case 6:
                ExcVen(venda);
                break;

            default:
                printf("\n\nOPCAO INVALIDA!!!");
        }
    }while(sair);
}
