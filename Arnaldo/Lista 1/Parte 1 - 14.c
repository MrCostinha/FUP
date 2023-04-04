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
    wprintf(L"\nPorcentagem do acréscimo ou decréscimo: ");
    scanf("%f", &porcentagem);

    porcentagem /= 100;

    if (codigo==1) {
        porcentagem *= preco;
        preco += porcentagem;

        wprintf(L"\nNovo preço: R$ %.2f", preco);
    }
    else if (codigo==2) {
        porcentagem *= -preco;
        preco += porcentagem;

        wprintf(L"\nNovo preço: R$ %.2f", preco);
    }
    else {
        wprintf(L"\nCódigo inválido!");
    }

    return 0;
}