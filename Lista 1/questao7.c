#include <stdio.h>

int main() {
    int horas, minutos, segundos, total_segundos;
    
    printf("Digite as horas: ");
    scanf("%d", &horas);
    
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    total_segundos = horas * 3600 + minutos * 60 + segundos;
    
    printf("Total de segundos: %d\n", total_segundos);
    
    return 0;
}
