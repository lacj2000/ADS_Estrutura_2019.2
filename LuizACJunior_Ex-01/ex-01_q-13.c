#include <stdio.h>
#include <stdlib.h>
#define sFixo 200
#define perComissao 0.09

typedef struct Vendedor{
    char nome[50];
    double totalVenda;
}Vendedor, *VendedorP;

double salario(Vendedor v){
    return (sFixo+(perComissao * v.totalVenda));
}

char classe(double s){
    if(s<300){    
        return 'A';
    }else if (s<400){   
        return 'B';
    }else if(s<500){
        return 'C';
    }else if(s<600){
        return 'D';
    }else if(s<700){
        return 'E';
    }else if(s<800){
        return 'F';
    }else if(s<900){
        return 'G';
    }else if(s<1000){
        return 'H';
    }else{
        return 'I';
    }

}

void addV(VendedorP v,int n){
    Vendedor v1;
    printf("Nome vendedor:\n>>");
    fgets(v1.nome,50,stdin);
    printf("Valor vendas:\n>>");
    scanf("%lf",&v1.totalVenda);
    __fpurge(stdin);
    v[n-1] = v1;
}


void printV(VendedorP v,int n){
    for (int i = 0; i < n;i++){
        printf("%d - Vendedor: %s\n-salario: %.2lf -faixa %c\n",i+1,v[i].nome, salario(v[i]), classe(salario(v[i])));
    }
    printf("\n\n");
}

void menu(){
    int opcao = -1;
    VendedorP vendedor;
    vendedor = (VendedorP) malloc(sizeof(Vendedor));
    int quantidadeV = 0;
    while (opcao!=0){
        printf("1 - Adicionar funcionario:\n2 - Lista funcionarios:\n0 - Sair>>");
        scanf("%d",&opcao);
        __fpurge(stdin);
        switch (opcao){
        case 0:
            printf("fechando!\n");
            free(vendedor);
            break;
        case 1:
            if(quantidadeV != 0){
                vendedor = (Vendedor*) realloc(vendedor,(quantidadeV+1)*sizeof(Vendedor));
            }
            quantidadeV++;
            addV(vendedor, quantidadeV);
            break;
        case 2:
            printV(vendedor, quantidadeV);
            break;
        default:
            printf("valor errado");
            break;
        }
    }
}


void main(){
    menu();
    
}