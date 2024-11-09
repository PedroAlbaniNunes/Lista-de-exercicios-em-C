#include <stdio.h>
#include <stdlib.h>

int* aloca_vetor(int n) {
    // Verifica se n é um número positivo
    if (n <= 0) {
        return NULL; // Retorna NULL se n não é válido
    }

    // Tenta alocar memória para n inteiros
    int* vetor = (int*)malloc(n * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        // Alocação falhou, retorna NULL
        fprintf(stderr, "Erro de alocação de memória\n");
        return NULL;
    }

    // Retorna o ponteiro para o vetor alocado
    return vetor;
}

// Exemplo de uso
int main() {
    int n = 5; // Tamanho do vetor
    int* meu_vetor = aloca_vetor(n);

    // Verifica se a alocação foi bem-sucedida
    if (meu_vetor != NULL) {
        // Inicializa e imprime os elementos do vetor
        for (int i = 0; i < n; i++) {
            meu_vetor[i] = i * 10; // Atribui valores
            printf("%d ", meu_vetor[i]);
        }
        printf("\n");

        // Libera a memória alocada
        free(meu_vetor);
    }

    return 0;
}
