#include <stdio.h>

int main() {
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Triplo: %d\n", x*3);
    printf("Quadrado: %d\n", x*x);
    printf("Meio: %.1f\n", (float)x/2);
    return 0;
}