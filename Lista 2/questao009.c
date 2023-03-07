#include <stdio.h>
int main() {
    int t1 = 1, t2 = 1, pT, i;
    printf("Fibonacci ate o vigésimo termo:\n");
    printf("%d %d ", t1, t2);
    for (i = 3; i <= 20; i++) {
        pT = t1 + t2;
        printf("%d ", pT);
        t1 = t2;
        t2 = pT;
    }
    return 0;
}
