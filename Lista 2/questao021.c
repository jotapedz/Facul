#include <stdio.h>
int main() {
    int num, dig1, dig2, dig4, dig5;
    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &num);
    dig1 = num / 10000;
    dig2 = (num / 1000) % 10;
    dig4 = (num / 10) % 10;
    dig5 = num % 10;
    if (dig1 == dig5 && dig2 == dig4) {
        printf("%d eh um palindromo\n", num);
    } else {
        printf("%d nao eh um palindromo\n", num);
    }
    return 0;
}
