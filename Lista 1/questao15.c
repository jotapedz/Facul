#include <stdio.h>

int main() {
    float valor_dia = 50.25;  // valor pago por dia ao vendedor
    int dias_trabalhados;
    float salario_bruto, gratificacao, salario_liquido, imposto_renda;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * valor_dia;  // calcula o salário bruto

    if (dias_trabalhados > 20) {
        gratificacao = salario_bruto * 0.3;  // calcula a gratificação de 30%
    } else if (dias_trabalhados > 10) {
        gratificacao = salario_bruto * 0.2;  // calcula a gratificação de 20%
    } else {
        gratificacao = 0;  // não há gratificação
    }

    imposto_renda = salario_bruto * 0.1;  // calcula o imposto de renda

    salario_liquido = salario_bruto + gratificacao - imposto_renda;  // calcula o salário líquido

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Imposto de renda: R$ %.2f\n", imposto_renda);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
