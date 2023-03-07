#include <stdio.h>
int main() {
    int decimal, i;
    printf("Decimal\t\tBinario\t\tOctal\t\tHexadecimal\n");
    for (decimal = 1; decimal <= 256; decimal++) {
        // Conversão para binário
        int binario[8];
        for (i = 0; decimal > 0; i++) {
            binario[i] = decimal % 2;
            decimal = decimal / 2;
        }
        // Impressão dos equivalentes
        printf("%d\t\t", decimal);
        for (i = 7; i >= 0; i--) {
            printf("%d", binario[i]);
        }
        printf("\t\t%o\t\t%x\n", decimal, decimal);
    }
    return 0;
}
