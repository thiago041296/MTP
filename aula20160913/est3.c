#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define qntd_cadastro 5


int qntd_atual=0;

struct Cadastro{
    char nome[30];
    int idade;
    int telefone;
}cadastro[qntd_cadastro];

void cadastrar(){
    fflush(stdin);
    printf("\nDigite o nome: ");
    gets(cadastro[qntd_atual].nome);
    printf("\nDigite a idade: ");
    scanf("%d",&cadastro[qntd_atual].idade);
    printf("\nDigite o numero de telefone: ");
    scanf("%d",&cadastro[qntd_atual].telefone);
    qntd_atual++;
}

int menu(){

    int num;
    printf("\nMENU(Ainda restam %d cadastros)\
           \n\n1-Mostrar a listagem dos nomes\
           \n2-Mostrar a listagem das idades\
           \n3-Mostrar a listagem dos telefones\
           \n4-Fazer o cadastro\
           \n5-Sair\
           \n\nDigite a opcao desejada: ",qntd_cadastro-qntd_atual);

    scanf("%d", &num);
    return num;

}

void nomes(){
    system("clear");
    int count;
    printf("Lista de nomes cadastrados\n\n");
    for(count=0;count<qntd_atual;count++){
        printf("\n%d-",count+1);
        puts(cadastro[count].nome);
    }
}

void idades(){
    system("clear");
    int count;
    printf("Lista de idades cadastrados\n\n");
    for(count=0;count<qntd_atual;count++){
        printf("\n%d-%d",count+1,cadastro[count].idade);
    }
}

void telefones(){
    system("clear");
    int count;
    printf("Lista de telefones cadastrados\n\n");
    for(count=0;count<qntd_atual;count++){
        printf("\n%d-%d",count+1,cadastro[count].telefone);
    }
}

int main()
{
    int sair;
    do{
        switch(sair=menu()){

            case 1:
                nomes();
                break;

            case 2:
                idades();
                break;

            case 3:
                telefones();
                break;

            case 4:
                cadastrar();
                break;

            case 5:
                break;

            default:
                printf("\nOPCAO INVALIDA!!");
        }
    }while(sair!=5);

    return 0;
}
