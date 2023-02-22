#include <stdio.h>

int main() {
    int num1, num2;
    int soma, produto, diferenca, quociente, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    produto = num1 * num2;
    diferenca = num1 - num2;
    quociente = num1 / num2;
    resto = num1 % num2;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Diferenca: %d\n", diferenca);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
