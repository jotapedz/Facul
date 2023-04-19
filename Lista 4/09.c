#include <stdio.h>

// Função de ordenação Bubble Sort utilizando ponteiros
void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compara o elemento atual com o próximo elemento
            if (*(arr + j) > *(arr + j + 1)) {
                // Troca os elementos de posição se estiverem fora de ordem
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes da ordenacao:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Chama a função de ordenação Bubble Sort passando o ponteiro para o vetor e o tamanho do vetor
    bubbleSort(vetor, n);

    printf("\nVetor depois da ordenacao:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
