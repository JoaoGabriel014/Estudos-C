#include <stdio.h>
#include "modulo.c"

int main(){
    float d, c, total;

    printf("Distancia (km) :");
    scanf("%f", &d);

    printf("Consumo (km/l) :");
    scanf("%f", &c);

    total = calcular_litros(d, c);

    printf("Voce precisa de %.2f litros \n", total);


    return 0;
}