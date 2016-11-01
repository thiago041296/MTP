#include <stdio.h>
#include <math.h> //floor

struct Pixel{
    unsigned char R; //byte
    unsigned char G; //byte
    unsigned char B; //byte

};

int main(){

    struct Pixel pixel;
    int WPX,HPX,BPP,NCP,NIC,PAL;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    FILE *imagem;
    imagem = fopen("reliquias.bmp","r");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte,sizeof(byte),1,imagem);
    printf("%c",byte);
    fread(&byte,sizeof(byte),1,imagem);
    printf("%c\n",byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword,sizeof(dword),1,imagem);
    printf("Tamanho do arquivo(bytes): %u\n",dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    //fseek(imagem,4,SEEK_CUR); //<-pularia a informaçao reservada
    fread(&dword,sizeof(dword),1,imagem);
    printf("Informacao reservada: %08X\n",dword);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword,sizeof(dword),1,imagem);
    printf("Offset: %u\n",dword);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword,sizeof(dword),1,imagem);
    printf("Tamanho do cabecalho: %u\n",dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword,sizeof(dword),1,imagem);
    printf("Largura da imagem(pixels): %u\n",dword);
    WPX=dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword,sizeof(dword),1,imagem);
    printf("Altura da imagem(pixels): %u\n",dword);
    HPX=dword;
    //word	26-27	Qtde de planos de cores
    fread(&word,sizeof(word),1,imagem);
    printf("Qntd de planos de cores: %u\n",word);
    //word	28-29	Bits por pixel, BPP
    fread(&word,sizeof(word),1,imagem);
    printf("Bits por pixel: %u\n",word);
    BPP=word;
    //dword	30-33	Método de compressão
    fread(&dword,sizeof(dword),1,imagem);
    printf("Metodo de compressao: %u\n",dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword,sizeof(dword),1,imagem);
    printf("Tamanho da imagem(bytes): %u\n",dword);
    //dword	38-41	Resolução horizontal
    fread(&dword,sizeof(dword),1,imagem);
    printf("Resolucao horizontal: %u\n",dword);
    //dword	42-45	Resolução vertical
    fread(&dword,sizeof(dword),1,imagem);
    printf("Resolucao vertical: %u\n",dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword,sizeof(dword),1,imagem);
    NCP =(dword == 0) ? 1 << BPP : dword;
    printf("Numero de cores na paleta: %u\n",NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword,sizeof(dword),1,imagem);
    NIC =(dword == 0) ? NCP : dword;
    printf("Numero de cores importantes: %u\n",NIC);
    //tamanho da linha da array de pixels(bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels: %u\n",PAL);
    //laço de leitura
    int lap = 0;
    while (!feof(imagem)){
        //leia a informação do pixel (canais R, G e B)
        if(fread(&pixel,sizeof(pixel),1,imagem))
        printf("R: %u, G: %u, B: %u\n",pixel.R,pixel.G,pixel.B);
        lap+= 3;
        if ((lap + 3) > PAL){
            fseek(imagem,(PAL - lap),SEEK_CUR);
            lap = 0;
        }
    }
    fclose(imagem);
    return 0;
}
