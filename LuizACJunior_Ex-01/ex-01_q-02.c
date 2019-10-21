#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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


bool In(int valor,int vetor[],int n){
    for(int i=0;i < n;i++){
        if(vetor[i] == valor){
            return true;
        }
    }
    return false;
}


void uniao(int vetor1[], int vetor2[],int n){
    int *C = (int *) malloc(sizeof(int)),p = 1;
    for(int i=0;i < n;i++){
        if(!In(vetor1[i],C,n)){
            C[p-1] = vetor1[i];
            p++;
            C = realloc(C,p * sizeof (int)); 
        }
    }
    for(int f = 0;f < n;f++){
        if(!In(vetor2[f],C,n)){
            C[p-1] = vetor2[f];
            p++;
            C = realloc(C,p * sizeof (int)); 
        }
    }
    printf("\n");
    printarVetor(C,p-1,"união");
}


void intersecao(int vetor1[], int vetor2[],int n){
    int *D = (int *) malloc(sizeof(int)),p = 1;
    for(int i=0;i < n;i++){
        if(!In(vetor1[i],D,p) && In(vetor1[i],vetor2,n)){
            D[p-1] = vetor1[i];
            p++;
            D = realloc(D,p * sizeof (int)); 
        }
    }
    printf("\n");
    printarVetor(D,p-1,"interseção");

}



void main(){
    int n;
    printf("digite o numero de posições dos vetores: ");
    scanf("%d",&n);    
    int A[n];
    int B[n]; 
    preencherVetor(A, n, "a");
    preencherVetor(B, n, "b");
    uniao(A,B,n);
    intersecao(A,B,n);    

}