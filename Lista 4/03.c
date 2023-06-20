#include <stdio.h>

void atualizarMenor(int* menor, int novoValor) {
    if (novoValor < *menor) {
        *menor = novoValor;
    }
}

int main() {
    int numero, menor;

    // Solicitar o primeiro número
    printf("Digite um numero (ou digite um valor negativo para sair): ");
    scanf("%d", &numero);

    // Inicializar o menor valor com o primeiro número digitado
    menor = numero;

    // Solicitar mais números e atualizar o menor valor
    while (numero >= 0) {
        printf("Digite um numero (ou digite um valor negativo para sair): ");
        scanf("%d", &numero);
        if (numero >= 0) {
            atualizarMenor(&menor, numero);
        }
    }

    // Imprimir o menor valor fornecido
    printf("O menor valor fornecido foi: %d\n", menor);

    return 0;
}
