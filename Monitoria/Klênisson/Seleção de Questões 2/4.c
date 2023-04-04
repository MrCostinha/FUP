#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero_1, numero_2;

    wprintf(L"Insira 2 números: ");
    scanf("%d%d", &numero_1, &numero_2);

    numero_1 %= numero_2;

    if (numero_1==0) {
        wprintf(L"\nO primeiro número é divisível pelo segundo");
    }
    else {
        wprintf(L"\nO primeiro número não é divisível pelo segundo");
    }

    return 0;
}