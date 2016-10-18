#include <stdio.h>

int menu(){
    int op;
    printf("Digite 1 para escrever e 2 para ler e 0 para sair: ");
    scanf("%d", &op);
    return op;
}

int main(){

    FILE *arq;
    int op,idade,altura,idade1,altura1;
    char nome[20],nome1[20];
    while(op = menu()){
        if(op==1){
            printf("Digite o nome: ");
            fflush(stdin);
            gets(nome);
            printf("Digite a idade: ");
            scanf("%d", &idade);
            printf("Digite a altura: ");
            scanf("%d", &altura);
            arq = fopen("C:\\Users\\1E30\\documents\\MTP\\aula20161018\\info.txt","w");
            fprintf(arq,"%s %d %d\n",nome,idade,altura );
            fclose(arq);
        }
        if(op==2){
            arq = fopen("C:\\Users\\1E30\\documents\\MTP\\aula20161018\\info.txt","r");
            fscanf(arq,"%s %d %d\n",nome1,&idade1,&altura1 );
            printf("Nome: %s\nIdade: %d\nAltura %d",nome1,idade1,altura1);
            fclose(arq);
        }
    }


}
