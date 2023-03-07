#include <stdio.h>
int main() {
    float vm, e, p;
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &vm);
    e = vm * 0.5; // a entrada cequivale a metade do valor da mercadoria
    p = (vm - e) / 2; // as duas prestações são iguais
    // arredonda para cima, caso a prestação não seja um número inteiro
    if (p != (int) p) {
        p = (int) p + 1;
    }
    printf("Valor da entrada: R$ %.2f\n", e);
    printf("Valor das duas prestações: R$ %.2f\n", p);
    return 0;
}
