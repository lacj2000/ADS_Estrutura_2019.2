#include <stdio.h>
#include <stdlib.h>

void esperaEnter(){
    int tecla;
    printf("Pressione ENTER\n");
    tecla = getchar();
}


int getJogador(){
    int valor;
    printf("camisa do jogador: \n>>");
    scanf("%d",&valor);
    __fpurge(stdin);
    if (valor >=0 && valor <=23 ){
        return valor;
    }else{
        printf("valor invalido!!\n");
        esperaEnter();
        system("clear");
        }

    return getJogador();

}



void printaPercentual(int * vetor, int n){
    printf("Jogador Votos %%\n");
    for(int v = 1; v <= 23;v++){
        int quant = 0;
        for (int i = 0; i < n;i++){
            if(vetor[i]== v){
                quant++;
            }
        }
        if(((double)quant/n)>0){

            printf(" %d         %d    %.2lf%%\n",v,quant,((double)quant/n)*100);
    
    }}

}


void main(){
    int * vetor = (int*) malloc(sizeof(int));
    int q = 0;
    while (1){
        vetor[q] = getJogador();
        if (vetor[q] == 0){
            break;
        }
        q++;
        system("clear");
    }
    printaPercentual(vetor,q);
}

