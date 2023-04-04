#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    numero %= 2;

    if (numero==0) {
        wprintf(L"\nO número é par");
    }
    else {
        wprintf(L"\nO número é ímpar");
    }

    return 0;
}