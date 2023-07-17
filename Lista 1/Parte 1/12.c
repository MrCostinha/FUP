#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float preco, acres_decres;
    int vendas;

    wprintf(L"Preço atual: R$ ");
    scanf("%f", &preco);
    printf("Vendas: ");
    scanf("%d", &vendas);

    if (vendas<500) {
        acres_decres = preco*(-0.1);
        preco += acres_decres;

        wprintf(L"\nNovo preço: R$ %.2f", preco);
    }
    else if (vendas<1200) {
        acres_decres = preco*0.05;
        preco += acres_decres;

        wprintf(L"\nNovo preço: R$ %.2f", preco);
    }
    else {
        acres_decres = preco*0.2;
        preco += acres_decres;
        
        wprintf(L"\nNovo preço: R$ %.2f", preco);
    }

    return 0;
}