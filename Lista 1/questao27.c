#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, media_aritmetica, media_geometrica;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    // Cálculo da média aritmética
    media_aritmetica = (num1 + num2 + num3) / 3;

    // Cálculo da média geométrica
    media_geometrica = pow(num1 * num2 * num3, 1.0/3);

    printf("A media aritmetica eh: %.2f\n", media_aritmetica);
    printf("A media geometrica eh: %.2f\n", media_geometrica);

    return 0;
}
