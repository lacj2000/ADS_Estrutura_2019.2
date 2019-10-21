#include <stdio.h>
#include <math.h>

void preencherVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("digite %s[%i]: ",letra,i);
        scanf("%i",&vetor[i]);
    }
}


int soma(int vetor[],int p){
    int soma = 0;
    for (int i = 0; i <p/2;i++){
        soma += pow(vetor[i] - vetor[19-i],2);
    }
    return soma;
}


void main(){
    int pos = 20;
    int vetor[pos];
    preencherVetor(vetor,pos, "v");
    printf("soma : %d\n",soma(vetor,pos));
}