#include <stdio.h>
int main() {
    int j = 150, p = 110, anos = 0;
    while (p <= j) {
        j += 2;
        p += 3;
        anos++;
    }
    printf("Pedro será maior que José em %d anos.\n", anos);
    return 0;
}
