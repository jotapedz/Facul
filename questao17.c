#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    int abs_num = (num >= 0) ? num : -num;
    printf("O valor absoluto de %d é: %d\n", num, abs_num);
    return 0;
}
