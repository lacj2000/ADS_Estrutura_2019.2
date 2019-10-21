#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


float soma(float *vetor, int n){
    float soma = 0;
    for(int i =0;i < n;i++){
        soma += vetor[i];
    }
    return soma;
}


float media(float *vetor,int n){
    return soma(vetor,n)/n;
}

void main(){
    float *D = (float *) malloc(sizeof(float));
    int size = 1;
    while (true){
        printf("digite valores: ");
        scanf("%f",&D[size-1]);
        if(D[size-1]==EOF){
            break;                             
        }
        else{ 
            size++;     
            D = realloc(D,size * sizeof(float)); 
        }
    }
    printf("soma:  %.2f\n",soma(D,size-1));
    printf("media: %.2f\n",media(D,size-1));
    
}