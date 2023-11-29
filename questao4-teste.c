#include <stdio.h>

void Somar (){
    int soma, N1, N2;
    scanf("%d", &N1);
    scanf("%d", &N2);

    if ((N1< 0) || (N2<0)) {
        printf ("Um dos Números são Negativos!");
    } else{
        soma = N1+N2;
        printf("%d", soma);
    }
}

int main (void) {
    Somar();
    return 0;
}