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


void main(){
    int n, tC = 1;
    printf("digite o numero de posições dos vetores: ");
    scanf("%d",&n);    
    int A[n];
    int B[n];
    
    preencherVetor(A, n, "a");
    preencherVetor(B, n, "b");
    
    int C[2*n],tm = 0;
    
    for(int i = 0;i<n;i++){
        C[tm]=A[i];
        tm++;
    }
    for(int i = 0;i<n;i++){
        C[tm]=B[i];
        tm++;
    }
    printarVetor(C,2*n,"Resultado");

}