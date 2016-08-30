#include <stdio.h>
#include <float.h>
#include <string.h>


int main(){
    srand(time(0));
    char res[10];
    int r;

    if(1.0f>(1.0f-FLT_EPSILON)){
        r=1;
        strcpy(res,"true");
    }
    else{
        r=0;
        strcpy(res,"false");
    }

    printf("\nO resultado booleano entre 1>(1-Epsilon) eh: %d(%s)\n\n", r,res);

    //--------------------------------------------------------------------------------//

    int a,b,c,d;

    a=rand()%10;
    b=rand()%10;
    c=rand()%10;
    d=rand()%10;

    printf("\nO numero aleatorio entre 0 e 1 eh: 0.%d%d%d%d\n\n",a,b,c,d);

    return 0;
}

