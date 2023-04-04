#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float preco, porcentagem;
    int codigo;

    wprintf(L"Preço atual: R$ ");
    scanf("%f", &preco);
    wprintf(L"\nDigite: \n\t1 - Aumentar o preço\t|\t2 - Diminuir o preço\n");
    scanf("%d", &codigo);
    
    switch (codigo) {
        case 1:
            wprintf(L"\nPorcentagem do acréscimo: ");
            scanf("%f", &porcentagem);
            
            porcentagem /= 100;
            preco *= (1+porcentagem);

            wprintf(L"\nNovo preço: R$ %.2f", preco);
            break;

        case 2:
            wprintf(L"\nPorcentagem do decréscimo: ");
            scanf("%f", &porcentagem);

            porcentagem /= 100;
            preco *= (1-porcentagem);

            wprintf(L"\nNovo preço: R$ %.2f", preco);
            break;

        default:
            wprintf(L"\nCódigo inválido!");
    }

    return 0;
}