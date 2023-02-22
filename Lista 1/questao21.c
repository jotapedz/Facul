#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("O número %d é %s de %d.\n", num1, (num1 % num2 == 0) ? "múltiplo" : "não múltiplo", num2);
    return 0;
}
