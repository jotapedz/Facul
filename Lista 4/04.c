#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declarando o vetor com o tamanho fornecido
    int vetorInt[tamanho];
    float vetorFloat[tamanho];
    char vetorChar[tamanho];

    // Lendo valores para o vetor de inteiros
    printf("Digite os valores do vetor de inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorInt[i]);
    }

    // Lendo valores para o vetor de floats
    printf("Digite os valores do vetor de floats:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetorFloat[i]);
    }

    // Lendo valores para o vetor de chars
    printf("Digite os valores do vetor de chars:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf(" %c", &vetorChar[i]); // Usamos um espaço antes do %c para ignorar caracteres de nova linha
    }

    // Imprimindo os valores e endereços dos vetores
    printf("\nValores e Enderecos dos vetores:\n");
    printf("Vetor de inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %d, Endereco: %p\n", vetorInt[i], &vetorInt[i]);
    }

    printf("Vetor de floats:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %.2f, Endereco: %p\n", vetorFloat[i], &vetorFloat[i]);
    }

    printf("Vetor de chars:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor: %c, Endereco: %p\n", vetorChar[i], &vetorChar[i]);
    }

    return 0;
}
//é possível observar que os elementos do vetor estão armazenados em posições consecutivas de memória, ou seja, os elementos estão alocados em sequência. Isso é uma consequência da natureza contígua da alocação de memória em vetores em C. Os endereços de memória são incrementados em um valor correspondente ao tamanho do tipo de dado do vetor. Por exemplo, se o vetor for de inteiros (4 bytes por elemento em uma arquitetura típica), os endereços de memória serão incrementados em 4 bytes a cada elemento.