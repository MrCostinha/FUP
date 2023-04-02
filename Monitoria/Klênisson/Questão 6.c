#include <stdio.h>

int main() {
    int x, soma;

    printf("Número inteiro de 3 dígitos (000): ");
    scanf("%d", &x);

    soma = x%10;
    x /= 10;
    soma += x%10;
    x /= 10;
    soma += x%1000;

    printf("Soma dos algarismos: %d", soma);

    return 0;
}