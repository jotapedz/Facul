#include <stdio.h>

#define PI 3.14159

int main() {
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Diâmetro: %f\n", 2 * raio);
    printf("Circunferência: %f\n", 2 * PI * raio);
    printf("Área: %f\n", PI * raio * raio);
    return 0;
}
