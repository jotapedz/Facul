#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar números pseudoaleatórios no intervalo [0, N-1]
int gerarNumero(int N) {
    return rand() % N;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Inicializa o gerador de números aleatórios com a semente do tempo
    srand(time(0));

    int tamanhoXY;
    printf("Digite o tamanho dos vetores X e Y: ");
    scanf("%d", &tamanhoXY);

    // Aloca memória para os vetores X e Y
    int* vetorX = (int*) malloc(tamanhoXY * sizeof(int));
    int* vetorY = (int*) malloc(tamanhoXY * sizeof(int));

    printf("Vetor X gerado:\n");
    for (int i = 0; i < tamanhoXY; i++) {
        vetorX[i] = gerarNumero(N);
        printf("%d ", vetorX[i]);
    }

    printf("\nVetor Y gerado:\n");
    for (int i = 0; i < tamanhoXY; i++) {
        vetorY[i] = gerarNumero(N);
        printf("%d ", vetorY[i]);
    }

    // Aloca memória para a matriz M
    int** matrizM = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matrizM[i] = (int*) malloc(N * sizeof(int));
    }

    // Inicializa a matriz M com zero em todas as posições
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizM[i][j] = 0;
        }
    }

    printf("\nMatriz M (coocorrências dos elementos de X e Y):\n");
    for (int i = 0; i < tamanhoXY; i++) {
        matrizM[vetorX[i]][vetorY[i]]++; // Incrementa a coocorrência dos elementos na posição correspondente de M
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrizM[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(vetorX);
    free(vetorY);
    for (int i = 0; i < N; i++) {
        free(matrizM[i]);
    }
    free(matrizM);

    return 0;
}
