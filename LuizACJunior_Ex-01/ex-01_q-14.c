#include <stdio.h>
#include <stdio.h>
#define saltosN 5

void clear(){
    printf("pressione enter para continuar...");
    gets();
    system("clear");
}

void printMedia(float vetor[]){
    int soma = 0;
    for( int i = 0; i< saltosN;i++){
            soma += soma + (vetor[i]*100);
        }
    printf("media: %.2f\n",((float)soma/100)/5);
}

void main(){
    while (1){
        char nome[50]= "";
        printf("Digite o nome do atleta:\n>>");
        fgets(nome,50,stdin);
        if (nome[1]==NULL){
            break;
        }
        float saltos[saltosN];
        for( int i = 0; i< saltosN;i++){
            printf("%dºsalto: ",i+1);
            scanf("%f",&saltos[i]);
        }
        clear();
        printf("nome: %s\n");
        printf("saltos ");
        for(int i = 0; i< saltosN;i++){
            printf("%.2f ",saltos[i]);
        }
        printMedia(saltos);
        clear();

    }    
}