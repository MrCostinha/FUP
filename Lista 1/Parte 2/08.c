#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int numero;

    wprintf(L"Digite um número natural: ");
    scanf("%d", &numero);

    for (int i = numero-1; i > 1; i--) {
        numero *= i;
    }

    wprintf(L"O fatorial é: %d", numero);

    return 0;
}