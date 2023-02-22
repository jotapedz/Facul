#include <stdio.h>

int main() {
    int segundos, horas, minutos, seg_restantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // calcula as horas
    seg_restantes = segundos % 3600; // calcula os segundos restantes após as horas
    minutos = seg_restantes / 60; // calcula os minutos
    seg_restantes = seg_restantes % 60; // calcula os segundos restantes após os minutos

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.", segundos, horas, minutos, seg_restantes);

    return 0;
}
