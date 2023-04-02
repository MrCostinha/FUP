#include <stdio.h>
#define pi 3.14

int main() {
    float raio, area;

    printf("Raio do círculo (m): ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("Área do círculo: %.4fm²", area);
    return 0;
}