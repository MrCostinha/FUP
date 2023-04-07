#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float numero_1, numero_2;
    int opcao;

    wprintf(L"Digite 2 números: ");
    scanf("%f%f", &numero_1, &numero_2);
    wprintf(L"Selecione uma opção:\n\t1 - Soma\n\t2 - Multiplicação\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            wprintf(L"Soma dos números: %.2f", numero_1+numero_2);
            break;
        case 2:
            wprintf(L"Multiplicação nos números: %.2f", numero_1*numero_2);
            break;
        default:
            wprintf(L"Opção inválida");
    }

    return 0;
}