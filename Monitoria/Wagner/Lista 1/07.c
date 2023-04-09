#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero_1, numero_2;

    wprintf(L"Insira 2 números: ");
    scanf("%d%d", &numero_1, &numero_2);

    if (numero_1>numero_2) {
        wprintf(L"Número %d maior", numero_1);
    }
    else if (numero_2>numero_1) {
        wprintf(L"Número %d maior", numero_2);
    }
    else {
        wprintf(L"Números iguais");
    }

    return 0;
}