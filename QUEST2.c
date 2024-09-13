#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int matricula;
    float notas[3];
} Aluno;

int main() {
    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(Aluno));

    Aluno aluno;
    
    strncpy(aluno.nome, "João da Silva", MAX_NOME - 1);
    aluno.nome[MAX_NOME - 1] = '\0';  
    aluno.matricula = 123456;
    aluno.notas[0] = 7.5;
    aluno.notas[1] = 8.0;
    aluno.notas[2] = 9.2;
    
    printf("Nome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno.notas[0], aluno.notas[1], aluno.notas[2]);

    return 0;
}
