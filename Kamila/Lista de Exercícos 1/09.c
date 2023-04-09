#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float preco, percentual;

    wprintf(L"Preço de custo: R$ ");
    scanf("%f", &preco);
    printf("Percentual de aumento: ");
    scanf("%f", &percentual);

    preco *= (1 + (percentual/100));
    
    wprintf(L"Preço de venda: R$ %.2f", preco);

    return 0;
}