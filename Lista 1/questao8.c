#include <stdio.h>

int main() {
    int valor, resultado;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    
    resultado = valor * valor;
    
    printf("O valor ao quadrado é: %d\n", resultado);
    
    return 0;
}
