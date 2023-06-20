#include <stdio.h>
#include <string.h>

void copiarString(char *destino, const char *origem) {
    // Percorre a string de origem e copia cada caractere para a string de destino
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0'; // Adiciona o caractere nulo no final da string de destino
}

int main() {
    char origem[100]; // Declaração de um array de char para armazenar a string de origem
    char destino[100]; // Declaração de um array de char para armazenar a string de destino

    printf("Digite uma string: ");
    fgets(origem, sizeof(origem), stdin); // Lê a string de origem fornecida pelo usuário

    // Remove o caractere de nova linha (\n) do final da string lida pelo fgets
    origem[strcspn(origem, "\n")] = '\0';

    copiarString(destino, origem); // Chama a função para copiar a string de origem para a string de destino

    printf("A string copiada eh: %s\n", destino); // Imprime a string de destino copiada

    return 0;
}
