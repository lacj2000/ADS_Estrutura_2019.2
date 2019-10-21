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
    int n;
    printf("quantidade elementos: ");
    scanf("%d",&n);
    int A[n], B[n];
    preencherVetor(A,n,"A"); 
    for(int i = 0;i < n;i++){
        if(A[i] % 2 == 0){
            B[i] = 0;
        }else{
            B[i] = 1;
        }
    }
    printarVetor(B,n,"B");
}