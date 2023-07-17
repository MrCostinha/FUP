#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;

    wprintf(L"Digite um número natural: ");
    scanf("%d", &numero);

    for (int i = numero-1; i>1; i--) {
        numero *= i;
    }

    wprintf(L"O fatorial é: %d", numero);

    return 0;
}