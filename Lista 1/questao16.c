#include <stdio.h>

int main() {
    float valorHoraAula, numHoras, percDesconto, salarioBruto, salarioLiquido;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valorHoraAula);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &numHoras);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percDesconto);

    salarioBruto = valorHoraAula * numHoras;
    salarioLiquido = salarioBruto * (1 - (percDesconto/100));

    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
