#include <stdio.h>

int main() {
    float cotacao, valorReal, valorDolar;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / cotacao;

    printf("O valor em dolar e: %.2f\n", valorDolar);

    return 0;
}
