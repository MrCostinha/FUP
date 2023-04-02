#include <stdio.h>

int main() {
    float real, cotacao_dollar = 5.23, dollar;

    printf("Insira o valor em reais: R$ ");
    scanf("%f", &real);

    dollar = real/cotacao_dollar;

    printf("O valor convertido em dólares é: USD %.2f", dollar);
    return 0;
}