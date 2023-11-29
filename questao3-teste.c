//3. Identifique os erros de compila¸c não que seriam detectados no seguinte programa se eles existirem:
#include <stdio.h>

int main ( ) {
    int N_ant , N_prox , N , N_atual
    N_ant = N_atual =1;
        for( i =1 ,i <= N , i ++) {
            N_prox = N_ant + N_atual ;
            N_ant = N_atual ;
            N_atual = N_prox ;
    printf ("Fim do laco !\n") ;
return
}

/*O código apresenta os seguintes erros: 
a)	Linha 3 e 4 vão dar erros por motivos diferentes. A 2 por que não apresenta ponto e virgula no final da linha e a 3 por que não possui o tipo de variável. Caso quem fez o programa quisesse setar tudo como inteiros deveria colocar todos na mesma linha para serem identificados como tipo inteiro. 
b)	Possui um erro no for da linha 5 onde a chave de fechamento não existe. Além disso a variável N não existe, apenas na teoria: N_ant, N_Prox, N, N_atual, N_ant  (Lembrando que tais variáveis ainda darão erro se não bem ajustadas, logo não tem um “fim” para o çao já que a variável N é uma condição para finalização do laço.
c)	Linha 11 o return não retorna nenhum valor além de não estar fechado por ponto e virgula.*/