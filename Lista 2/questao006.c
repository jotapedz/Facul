#include <stdio.h>
int main() {
    int v, vp = 0, vr = 0, vb = 0, vn = 0, tv = 0, confirma;
    printf("Bem-vindo(a) a urna eletrônica! Os candidatos são:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em branco\n");
    printf("Digite o número do seu candidato (ou 0 para voto em branco): ");
    scanf("%d", &v);
    while (v >= 0) {
        switch (v) {
            case 5:
                printf("Você votou em Paulo. Confirma? (1 - Sim / 0 - Não): ");
                scanf("%d", &confirma);
                if (confirma) vp++;
                break;
            case 7:
                printf("Você votou em Renata. Confirma? (1 - Sim / 0 - Não): ");
                scanf("%d", &confirma);
                if (confirma) vr++;
                break;
            case 0:
                printf("Você votou em branco. Confirma? (1 - Sim / 0 - Não): ");
                scanf("%d", &confirma);
                if (confirma) vb++;
                break;
            default:
                printf("Voto nulo. Confirma? (1 - Sim / 0 - Não): ");
                scanf("%d", &confirma);
                if (confirma) vn++;
                break;
        }
        tv++;
        printf("Digite o número do seu candidato (ou 0 para voto em branco): ");
        scanf("%d", &v);
    }
    printf("\nResultado final:\n");
    printf("Paulo - %.2f%% dos votos\n", (float)vp / tv * 100);
    printf("Renata - %.2f%% dos votos\n", (float)vr / tv * 100);
    printf("Votos em branco - %.2f%% dos votos\n", (float)vb / tv * 100);
    printf("Votos nulos - %.2f%% dos votos\n", (float)vn / tv * 100);
    if (vp > vr) {
        printf("\nPaulo foi eleito presidente com %d votos!", vp);
    } else if (vr > vp) {
        printf("\nRenata foi eleita presidente com %d votos!", vr);
    } else {
        printf("\nHouve um empate entre Paulo e Renata, com %d votos cada.", vp);
    }
    return 0;
}
