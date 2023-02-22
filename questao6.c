#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    
    printf("Digite o sexo (m/f): ");
    scanf(" %c", &sexo);
    
    if (sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
        printf("Peso ideal para homens: %.2f kg\n", peso_ideal);
    }
    else if (sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
        printf("Peso ideal para mulheres: %.2f kg\n", peso_ideal);
    }
    else {
        printf("Sexo inválido. Digite 'm' para masculino ou 'f' para feminino.\n");
    }
    
    return 0;
}
