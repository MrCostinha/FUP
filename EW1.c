#include <stdio.h>

int main() {
    int num1, num2, num3, soma, multiplicacao, divisao;

    printf("Insira os 3 números: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    soma = num1+num2+num3;
    multiplicacao = soma*num2;
    divisao = multiplicacao/num3;

    printf("Soma: %d\nMultiplicação: %d\nDivisão: %d", soma, multiplicacao, divisao);

    return 0;
}