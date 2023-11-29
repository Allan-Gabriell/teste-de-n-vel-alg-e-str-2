//2. O que faz o seguinte programa? E qual sua saida?

# include <stdio.h>

int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}

int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}

/*Esse código basicamente vai fazer uma operação matemática simples com uma matriz 3X3 fazendo uso das posições
dos elementos na matriz

- O resultado da saída do código é menos: -5

E a operação matemática é essa:

(0x1x1)+(1x(-1)x4)+(1x0x4)-(1x1x1)-0x(-1)x0*-(0x1x0)
-4-1
=-5 */