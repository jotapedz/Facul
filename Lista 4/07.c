#include <stdio.h>
#include <string.h>

void concatenarStrings(char *destino, const char *origem) {
    // Move o ponteiro de destino para o final da string de destino
    while (*destino != '\0') {
        destino++;
    }

    // Percorre a string de origem e copia cada caractere para o final da string de destino
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0'; // Adiciona o caractere nulo no final da string de destino
}

int main() {
    char string1[100]; // Declaração de um array de char para armazenar a primeira string
    char string2[100]; // Declaração de um array de char para armazenar a segunda string

    printf("Digite a primeira string: ");
    gets(string1); // Lê a primeira string fornecida pelo usuário

    printf("Digite a segunda string: ");
    gets(string2); // Lê a segunda string fornecida pelo usuário

    concatenarStrings(string1, string2); // Chama a função para concatenar as duas strings

    printf("A string concatenada eh: %s\n", string1); // Imprime a string concatenada

    return 0;
}
