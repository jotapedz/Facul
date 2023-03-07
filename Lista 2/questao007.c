#include <stdio.h>
int main() {
    float n1, n2, r;
    do {
        printf("Digite dois números: ");
        scanf("%f %f", &n1, &n2);  
        if (n2 == 0) {
            printf("ERRO: o divisor nao pode ser zero!\n");
        }
    } while (n2 == 0);
    r = n1 / n2;
    printf("%.2f / %.2f = %.2f\n", n1, n2, r);
    return 0;
}
