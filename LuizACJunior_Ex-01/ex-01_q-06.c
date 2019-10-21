#include <stdio.h>

int gMaior(int vetor[], int n){
    int i, maior = vetor [0];
    for (i = 1;i<n;i++){
        if(maior<vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}


void pMaior(int vetor[], int n,int maior){
    int i;
    for (i = 0 ;i < n;i++){
        if(maior == vetor[i]){
            printf("    -posição do maior: %d \n",i);
        }
    }
}


int gMenor(int vetor[], int n){
    int i, menor = vetor[0];
    for (i = 1; i < n; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }
    return menor;
}


void pMenor(int vetor[], int n,int menor){
    int i;
    for (i = 0 ;i < n;i++){
        if(menor == vetor[i]){
            printf("    -posição do menor: %d \n",i);
        }
    }
}


void preencherVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("digite %s[%i]: ",letra,i);
        scanf("%i",&vetor[i]);
    }
}


void main(){
    int n;
    printf("digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    preencherVetor(vetor,n,"vetor");
    int maior, menor;
    maior = gMaior(vetor,n);
    menor = gMenor(vetor,n);
    printf("maior elemento: %d\n",maior);
    pMaior(vetor,n,maior);
    printf("menor elemento: %d\n",menor);
    pMenor(vetor,n,menor);
    }