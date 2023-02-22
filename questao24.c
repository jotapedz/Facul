#include <stdio.h>

int main() {
    int x, n, produto;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    produto = x << n; // calcula o produto utilizando o operador de deslocamento bit a esquerda

    printf("O produto entre %d e 2 elevado a %d e: %d", x, n, produto);

    return 0;
}
