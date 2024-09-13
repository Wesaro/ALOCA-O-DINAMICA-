#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *vetor;

    do {
        printf("Digite um valor inteiro não negativo para N: ");
        scanf("%d", &N);
        if (N < 0) {
            printf("O valor de N deve ser não negativo. Tente novamente.\n");
        }
    } while (N < 0);

    vetor = (int *)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor %d (deve ser maior ou igual a 2): ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("O valor deve ser maior ou igual a 2. Tente novamente.\n");
            }
        } while (vetor[i] < 2);
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}
