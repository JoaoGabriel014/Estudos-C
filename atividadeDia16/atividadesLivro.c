#include <stdio.h>

typedef struct {
    char nome[30];
    float preco;
} Prato;

int main() {
    Prato p1, p2;

    printf("Prato 1 e preço: ");
    scanf("%s %f", p1.nome, &p1.preco);  

    printf("Prato 2 e preço: ");
    scanf("%s %f", p2.nome, &p2.preco); 
    printf("\nTotal do pedido: R$ %.2f\n", p1.preco + p2.preco);

    if(p1.preco > p2.preco) {
        printf("Mais caro: %s\n", p1.nome);
    } else if (p2.preco > p1.preco) {
        printf("Mais caro: %s\n", p2.nome);
    } else {
        printf("Os dois pratos têm o mesmo preço.\n");
    }

    return 0;
}