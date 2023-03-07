#include <stdio.h>
int main(){
    int x = 3, y = x;
    printf("Valor de x: %d\n", x);
    printf("pré incremento: %d\n\n", --x);
    printf("Valor de x: %d\n", y);
    printf("pós incremento: %d\n", y--);
    printf("Valor de x pós incremento: %d", y);
    return 0;
}