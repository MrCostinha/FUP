#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    
    float preco, porcentagem;
    int codigo;

    wprintf(L"Preço atual: R$ ");
    scanf("%f", &preco);
    wprintf(L"\nDigite 1 para Aumentar o preço ou 2 para Diminuir o preço: ");
    scanf("%d", &codigo);
    wprintf(L"\nPorcentagem do acréscimo ou decréscimo: ");
    scanf("%f", &porcentagem);

    porcentagem /= 100;

    switch (codigo) {
        case 1:
            porcentagem *= preco;
            preco += porcentagem;
            wprintf(L"\nNovo preço: R$ %.2f", preco);
            break;
        case 2:
            porcentagem *= -preco;
            preco += porcentagem;
            wprintf(L"\nNovo preço: R$ %.2f", preco);
            break;
        default:
            wprintf(L"\nCódigo inválido!");
    }

    return 0;
}