#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float valor, juros;
    int forma_de_pagamento;

    printf("Valor da compra: R$ ");
    scanf("%f", &valor);
    wprintf(L"Forma de pagamento: \n\t1 - Dinheiro\n\t2 - Crédito à vista\n\t3 - Crédito 2x\n\t4 - Crédito 3x\n");
    scanf("%d", &forma_de_pagamento);

    switch (forma_de_pagamento) {
    case 1:
        valor *= (1-0.15);
        printf("\nValor final: R$ %.2f\n", valor);
        break;
    case 2:
        valor *= (1-0.10);
        printf("\nValor final: R$ %.2f", valor);
        break;
    case 3:
        valor = valor;
        printf("\nValor final: R$ %.2f\nValor das parcelas: 2x R$ %.2f", valor, valor/2);
        break;
    case 4:
        juros = valor*0.05*3;
        valor += juros;
        printf("\nValor final: R$ %.2f\nValor das parcelas: 3x R$ %.2f", valor, valor/3);
        break; 
    default:
        wprintf(L"\nOpção Inválida!");
    }

    return 0;
}