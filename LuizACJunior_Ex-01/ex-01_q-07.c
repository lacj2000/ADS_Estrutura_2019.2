#include <stdio.h>

void preencherVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("digite %s[%d]: ",letra,i);
        scanf("%d",&vetor[i]);
    }
}


void printarVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("%s[%i]: %i\n",letra,i,vetor[i]);
    }
}


int gMenorF(int vetor[],int p, int n){
    int i, menor = vetor[p];
    for (i = p+1; i < n; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }
    return menor;
}

int gMaior(int vetor[], int n){
    int i, maior = vetor [0];
    for (i = 1;i<n;i++){
        if(maior<vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}


void ordenar(int vetor[], int n){
    for(int i = 0;i < n;i++){
        int ar = vetor[i];
        int menor = gMenorF(vetor,i,n);
        int p = i+1;
        while(1){
            if(vetor[p] == menor){
               vetor[i] = vetor[p];
               vetor[p] = ar;
               break; 
            }
            p++;
        }
    }





}

void main(){
    int n;
    printf("Tamanho vetor:");
    scanf("%d",&n);
    int vetor[n];
    preencherVetor(vetor,n,"vetor");
    printarVetor(vetor,n,"desordenado");
    ordenar(vetor,n);
    printarVetor(vetor,n,"ordenado");
}