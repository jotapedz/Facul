#include <stdio.h>

int main() {
    char string[100]; // Declaração de um array de char para armazenar a string
    char *ptr; // Declaração de um ponteiro de char

    printf("Digite uma string: ");
    gets(string); // Lê a string fornecida pelo usuário

    ptr = string; // Atribui o endereço de memória inicial da string ao ponteiro

    int tamanho = 0; // Variável para armazenar o tamanho da string

    // Percorre a string utilizando o ponteiro, contando os caracteres até encontrar o caractere nulo '\0'
    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }

    printf("O tamanho da string '%s' eh: %d\n", string, tamanho);

    return 0;
}
