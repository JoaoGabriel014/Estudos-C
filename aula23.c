#include <stdio.h>
#include "calculo.c"

int main(){

    int resultado;

    resultado = fazer_soma(30,30);

    printf("O resultado da soma é %d", resultado);

    return 0;
}