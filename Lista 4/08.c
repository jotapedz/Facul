#include <stdio.h>

// Função para buscar um caractere em uma string usando ponteiros
int buscarCaractere(const char *string, char caractere) {
    while (*string != '\0') {
        if (*string == caractere) {
            return 1; // Retorna 1 se o caractere for encontrado na string
        }
        string++; // Move o ponteiro para o próximo caractere na string
    }

    return 0; // Retorna 0 se o caractere não for encontrado na string
}

int main() {
    char minhaString[100]; // Declaração de um array de char para armazenar a string
    char caractere; // Caractere a ser buscado na string

    printf("Digite uma string: ");
    gets(minhaString); // Lê a string fornecida pelo usuário

    printf("Digite o caractere a ser buscado: ");
    scanf("%c", &caractere); // Lê o caractere a ser buscado

    // Chama a função para buscar o caractere na string
    if (buscarCaractere(minhaString, caractere)) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }

    return 0;
}
