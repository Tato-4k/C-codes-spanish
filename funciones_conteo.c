#include <stdio.h>
#include <stdlib.h>

void conteo_caracteres_v1(){
    //Cuenta los caracteres de la entrada

        //nc=numero caracteres
    long int nc;
    nc=0;
    while(getchar()!=EOF){
        nc++;
    }
    printf("%ld\n", nc);
}
void conteo_caracteres_v2(){
    //cuenta la entrada de los caracteres. version 2

    int nc;

    for(nc=0; getchar()!=EOF; nc++);
    printf("%d", nc);
}
void conteo_new_lineas_v1(){

    //En C, las comillas dobles se utilizan para representar cadenas de caracteres, mientras que las comillas simples se utilizan
    //para representar caracteres individuales.

        int nl,c;
        nl=0;
        while((c=getchar())!=EOF){
            if(c=='\n')
                nl++;
        }
        printf("%d", nl);
}
void ej_1_8(){

    //Programa que cuenta num tabulaciones, white space, y nuevas lineas
    int nl,c,nt,nws;
    nl=0;
    nt=0;
    nws=0;
    while((c=getchar())!=EOF){
        if (c == '\n')
            nl++;
        if (c=='\t')
            nt++;
        if (c==' ')
            nws++;

    }
    printf("%d", nl+nt+nws);
}
void conteo_palabras(){
    //Cuenta lineas, palabras y caracteres de la entrada

    #define IN 1 //En una palabra
    #define OUT 0 //Fuera palabra

    int c, nl=0, nw=0, nc=0, state;

    state = OUT;

    while((c=getchar())!=EOF){
        nc++;
        
        if(c=='\n')
            nl++;
        
        if(c==' ' || c=='\n' || c=='\t') //Si c es espacio ws, nl o un tabulador
            state = OUT;// fuera de una palabra
        
            //Si no es => esta en una palabra => palabras + 1
        else if(state==OUT){
            state=IN;
            nw++;
        }
    }

    printf("%d, %d, %d\n", nw, nl, nc);
}

int main(void){

    conteo_palabras();
}