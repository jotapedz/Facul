#include <stdio.h>
int main() {
    int numero, fatorial = 1;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("O número não é positivo.\n");
        return 0;
    }
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    printf("%d! = %d\n", numero, fatorial);
    return 0;
}
