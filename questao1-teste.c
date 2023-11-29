/*1. Implemente uma fun¸c˜ao que receba como parˆametro um vetor de n´umeros inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int vetorInvert(int vetor[], int number){
    /*Aqui criamos nossa funçao que irá inverter nosso vetor e para isso passamos como parâmetro 
    as duas variáveis usadas inicialmente na main: o nosso vetor e a variável number*/

    int armazenado, i; //Aqui geramos uma variável que ira guardar o nosso vetor para modificarmos

    for(i=0; i<number/2; i++){
        armazenado = vetor[i]; //Aqui atribuimos o valor do nosso vetor a variável armazenamento
        vetor[i]= vetor[number-i-1]; //Aqui fazemos a inversão dos valores do nosso vetor
        vetor[number-i-1]=armazenado;
    }

    return 0;
}

int main(void){
    int number, i; /*Criamo duas variáveis uma number que é a quantidade de valores que o usuário deseja informar
    e uma i que irá nos auxiliar no for*/

    printf("Informe quantos valores deseja informar: \n");
    scanf("%d", &number);

    int vetor[number]; //Aqui geramos o nosso vetor principal que irá ser invertido pela nossa função

    printf("Informe os valores: \n");
    for(i=0; i < number; i++){
        scanf("%d", &vetor[i]);
    }

    //No for logo acima, fazemos a leitura dos valores que irão preencher nosso vetor

    vetorInvert(vetor, number); //Chamada da função

    printf("\n vetor invertido:");
    for(i=0; i<number;i++){
        printf("%d", vetor[i]);
    }

    //Aqui logo acima exibimos na tela o novo vetor alterado

    return 0;
}