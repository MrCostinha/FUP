#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float preco;

    wprintf(L"Valor do produto: R$ ");
    scanf("%f", &preco);

    preco *= (1 + (12/100));
    
    wprintf(L"Valor com desconto: R$ %.2f", preco);

    return 0;
}