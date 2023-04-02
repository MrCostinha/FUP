#include <stdio.h>

int main() {
    float real, dollar;

    printf("Valor em reais: R$ ");
    scanf("%f", &real);

    dollar = real/5.06;

    printf("Valor convertido em dólares: USD %.2f", dollar);
    return 0;
}