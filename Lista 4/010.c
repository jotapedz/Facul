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

    int tamanhoX;
    printf("Digite o tamanho do vetor X: ");
    scanf("%d", &tamanhoX);

    int vetorX[tamanhoX];
    int vetorF[N]; // Vetor F para armazenar a quantidade de ocorrências dos elementos de X

    printf("Vetor X gerado:\n");
    for (int i = 0; i < tamanhoX; i++) {
        vetorX[i] = gerarNumero(N);
        printf("%d ", vetorX[i]);
    }

    // Inicializa o vetor F com zero em todas as posições
    for (int i = 0; i < N; i++) {
        vetorF[i] = 0;
    }

    printf("\nVetor F (quantidade de ocorrências dos elementos de X):\n");
    for (int i = 0; i < tamanhoX; i++) {
        vetorF[vetorX[i]]++; // Incrementa a quantidade de ocorrências do elemento na posição correspondente de F
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", vetorF[i]);
    }

    return 0;
}
