#include <stdio.h>

int main() {
    float valor_conta, taxa_garcom, valor_total;
    printf("Digite o valor da conta: ");
    scanf("%f", &valor_conta);
    taxa_garcom = valor_conta * 0.1;
    valor_total = valor_conta + taxa_garcom;
    printf("Valor da taxa do garçom: %.2f\n", taxa_garcom);
    printf("Valor total a ser pago: %.2f\n", valor_total);
    return 0;
}