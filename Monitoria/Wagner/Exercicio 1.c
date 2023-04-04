#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int num1, num2, num3, soma, multiplicacao, divisao;

    wprintf(L"Insira os 3 números: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    multiplicacao = soma * num2;
    divisao = multiplicacao / num3;

    wprintf(L"Soma: %d\nMultiplicação: %d\nDivisão: %d", soma, multiplicacao, divisao);

    return 0;
}