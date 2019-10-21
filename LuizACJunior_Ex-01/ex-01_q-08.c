#include <stdio.h>



void printarVetor(int  vetor[], int n, char letra[]){
    for(int i = 0;i < n; i++){
        printf("%s[%i]: %i\n",letra,i,vetor[i]);
    }
}

void fibonnaci(int fib[],int pen,int ult,int n){
    fib[0] = pen;
    fib[1] = ult;
    for(int i = 2;i < n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}


void main(){
    int n;
    printf("Tamanho vetor:");
    scanf("%d",&n);
    int fib[n];
    fibonnaci(fib,0,1,n);
    printarVetor(fib,n,"Fibbonacci");
    
}