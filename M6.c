#include <stdio.h>

int main() {
    int x, soma;

    printf("Insira um número inteiro de 3 dígitos: ");
    scanf("%d", &x);

    soma = x%10;
    x = x/10;
    soma = soma + x%10;
    x = x/10;
    soma = soma + x%1000;

    printf("A soma dos algarismos do número é: %d", soma);

    return 0;
}