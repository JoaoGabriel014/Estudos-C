#include <stdio.h>

typedef float Notas[4];

typedef struct{
    char nome[50];
    Notas notas;
}Aluno;

int main(){
    Aluno a;
    int i;
    float media=0;
    printf("Nome: ");
    scanf("%s", a.nome);
    for(i=0; i<4; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &a.notas[i]);
        media += a.notas[i];
    }
    media /=4;
    printf("\nAluno: %s", a.nome);
    printf("\nMédia: %.2f", media);

    return 0;
}