#include <stdio.h>

void preencherVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("digite %s[%i]: ",letra,i);
        scanf("%i",&vetor[i]);
    }
}


void printarVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("%s[%i]: %i\n",letra,i,vetor[i]);
    }
}


int soma(int vetor[], int n){
    int soma = 0;
    for(int i =0;i < n;i++){
        soma += vetor[i];
    }
    return soma;
}


float media(int vetor[],int n){
    return soma(vetor,n)/n;
}


void main(){
    int n;
    printf("tamanho vetor[n]: ");
    scanf("%d",&n);
    int vetor[n];
    preencherVetor(vetor,n,"vetor");
    printf("soma:  %d\n",soma(vetor,n));
    printf("media: %2.f\n",media(vetor,n));
    
}