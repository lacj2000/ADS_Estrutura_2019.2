#include <stdio.h>
#include <stdlib.h>

int getLancamento(){
    int valor;
    scanf("%d",&valor);
    if (valor >=0 || valor <=6 ){
        return valor;
    }
    printf("Digite um valor entre 1 e 6,estes incluidos:\n");
    return getLancamento();
}

void preencherVetor(int  vetor[], int n){
    for(int i = 0;i < n; i++){
        printf("digite o %dº lancamento do dado : ",i+1);
        vetor[i] = getLancamento();
    }
}


void printaPercentual(int vetor[], int n){
    for(int v = 1; v <= 6;v++){
        int quant = 0;
        for (int i = 0; i < n;i++){
            if(vetor[i]== v){
                quant++;
            }
        }
        if(((double)quant/n)>0){

            printf("O %% de %d é: %.2lf%%\n",v,((double)quant/n)*100);
    
    }}

}


void main(){
    int n;
    printf("Digite a quantidade de lançamentos\n>>");
    scanf("%d",&n);
    int dado[n];
    preencherVetor(dado,n);
    printaPercentual(dado, n);
    
}