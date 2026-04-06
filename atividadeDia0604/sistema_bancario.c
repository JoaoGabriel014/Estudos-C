#include <stdio.h>
#include <string.h>

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} ContaBancaria;

void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("Deposito de %.2f realizado com sucesso!\n", valor);
}

void sacar(ContaBancaria *conta, float valor) {
    if (valor > conta->saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso!\n", valor);
    }
}

void exibirSaldo(ContaBancaria conta) {
    printf("\n--- Dados da Conta ---\n");
    printf("Numero: %d\n", conta.numero);
    printf("Titular: %s", conta.titular);
    printf("Saldo: %.2f\n", conta.saldo);
}

int main() {
    ContaBancaria conta;

    // Cadastro inicial
    printf("Digite o numero da conta: ");
    scanf("%d", &conta.numero);
    getchar(); // limpar buffer

    printf("Digite o nome do titular: ");
    fgets(conta.titular, 50, stdin);

    conta.saldo = 0; // saldo inicial

    int opcao;
    float valor;

    do {
        printf("\n1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Exibir saldo\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Valor para deposito: ");
                scanf("%f", &valor);
                depositar(&conta, valor);
                break;

            case 2:
                printf("Valor para saque: ");
                scanf("%f", &valor);
                sacar(&conta, valor);
                break;

            case 3:
                exibirSaldo(conta);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}