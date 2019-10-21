#include <stdio.h>
#include <stdlib.h>

void printNotas(float * d, int n){
    for (int i = 0; i < n;i++){
        printf("%.2f ",d[i]);
    }
    printf("\n");
}
void printNotasInverso(float * d, int n){
    for (int i = n-1; i >=0; i--){
        printf("%.2f ",d[i]);
    }
    printf("\n");
}

float somaNotas(float * d, int n){
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma= soma+ d[i];
    }
    return soma;
}

int acimaMedia(float * d, int n,float media){
    int quantidade = 0;
    for (int i = n-1; i >=0; i--){
        if(d[i] >= media){
            quantidade++;
        }
    }
    return quantidade;
}

int abaixoSete(float * d, int n){
    int quantidade = 0;
    for (int i = n-1; i >=0; i--){
        if(d[i]<7){
            quantidade++;
        }
    }
    return quantidade;
}




void main(){
    float *notas;  
    notas = (float*) malloc(sizeof(float));
    int quantidade = 0;
    float nota = 0;
    while (1){
        printf("digite a %dª nota: ",quantidade+1);
        scanf("%f",&nota);            
        if (nota < 0){
            break;
        }
        quantidade++;
        notas = realloc(notas, (quantidade+1)*sizeof(float));    
        notas[quantidade-1] = nota;
    }while(nota != -1);

    printf("quantidade de notas: %d\n",quantidade);
    if (quantidade>0){
        printNotas(notas,quantidade); 
        printNotasInverso(notas, quantidade);
        printf("soma: %.2f\n",somaNotas(notas,quantidade));
        float media = somaNotas(notas,quantidade)/quantidade;
        printf("media: %.2f\n",media);
        printf("%d aluno(s) com média acima ou igual a da turma\n",acimaMedia(notas,quantidade, media));
        printf("%d aluno(s) com nota menor que 7\n",abaixoSete(notas,quantidade));
        printf("Isso é tudo pessoal!!\n");
    }
    free(notas);

}