#include <stdio.h>
#define pi 3.14

int main() {
    float raio, area;

    printf("Insira o valor do raio do círculo (m): ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("A área do círculo é: %.4fm²", area);
    return 0;
}