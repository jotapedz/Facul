#include <stdio.h>

int main() {
    int decimal_num;
    printf("Digite um número decimal: ");
    scanf("%d", &decimal_num);
    printf("O número decimal %d em octal é: %o\n", decimal_num, decimal_num);
    printf("O número decimal %d em hexadecimal é: %X\n", decimal_num, decimal_num);
    return 0;
}
