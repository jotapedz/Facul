#include <stdio.h>
int main() {
    int n, maior, menor, primeiro = 1;
    while (1) {
        printf("Digite um número (ou zero para sair): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (primeiro) {
            maior = n;
            menor = n;
            primeiro = 0;
        } else {
            if (n > maior) {
                maior = n;
            } else if (n < menor) {
                menor = n;
            }
        }
    }
    if (primeiro) {
        printf("Nenhum número foi digitado.\n");
    } else {
        printf("O maior número digitado foi: %d\n", maior);
        printf("O menor número digitado foi: %d\n", menor);
    }
    return 0;
}
