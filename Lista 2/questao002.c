#include <stdio.h>
int main() {
    int dia;
    do {
        printf("Digite um número de 1 a 7 (0 para sair): ");
        scanf("%d", &dia);
        if (dia == 1) {
            printf("Domingo\n");
        } else if (dia == 2) {
            printf("Segunda-feira\n");
        } else if (dia == 3) {
            printf("Terça-feira\n");
        } else if (dia == 4) {
            printf("Quarta-feira\n");
        } else if (dia == 5) {
            printf("Quinta-feira\n");
        } else if (dia == 6) {
            printf("Sexta-feira\n");
        } else if (dia == 7) {
            printf("Sábado\n");
        } else if (dia != 0) {
            printf("Número de dia não válido\n");
        }
    } while (dia != 0);
    return 0;
}
