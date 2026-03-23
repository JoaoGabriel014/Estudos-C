#include <stdio.h>
#include "modulo.c"

int main(){
    Comodo  minhaSala;

    printf("Digite a largura da sala (m)");
    scanf("%f", &minhaSala.largura);

    printf("Digite a comprimento da sala (m)");
    scanf("%f", &minhaSala.comprimento);
    
    float area = calcular_area(minhaSala);

    printf("A area total da sala é : %.2f",area);

    return 0;
}