#include <stdio.h>
int main() {
    int num, cont = 0, dig;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    while (num != 0) {
        dig = num % 10;
        if (dig == 7) {
            cont++;
        }
        num /= 10;
    }
    printf("O numero possui %d digitos iguais a 7\n", cont);
    return 0;
}
