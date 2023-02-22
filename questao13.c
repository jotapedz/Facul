#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // troca dos valores de A e B
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valor de A apos a troca: %d\n", a);
    printf("Valor de B apos a troca: %d\n", b);

    return 0;
}
