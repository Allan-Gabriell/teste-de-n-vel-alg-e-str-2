//Qual a saída do seguinte programa?

#include <stdio.h>

int main ( ) {
    int i ;
    for ( i =1 ; i <= 100 ; i *=100) {
        if ( i ==30 ) {
        break ;
    } else {
        printf ("%2d\n" ,2* i ) ;
    }
}
    printf ("Fim do laco !\n") ;
    return 0;
}

/*5) O programa tem como saída no final 200. I começa com o valor 1 mas é multiplicado por 100 (i*=100) o valor de if não é igualado a 30 então ele passa para o else que é dar print no valor de 2*i(i=100, então 200).  Além disso ele imprime a frase “Fim do laco !” no final.

200
Fim do laco !*/