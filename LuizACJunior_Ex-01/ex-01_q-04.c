#include <stdio.h>
#include <math.h>


void preencherVetor(int  vetor[], int n, char letra[]){
    int p = 7;
    for(int i = 0;i < n; i++){
        printf("%s na posição %i: ",letra,p);
        scanf("%i",&vetor[i]);
        p--;
    }
}


int toDecimal(int binario[]){
    int decimal = 0;
    for(int i = 0;i < 8;i++){
        decimal += binario[7-i] * pow(2,i); 
    }
    return decimal;
}

void main(){
    int binario[8];
    preencherVetor(binario,8,"binario");
    printf("decimal: %i\n",toDecimal(binario));
    printf("hexdecimal: %2X\n",toDecimal(binario));
}