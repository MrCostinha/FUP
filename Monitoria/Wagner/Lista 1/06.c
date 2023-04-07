#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float numero;

    wprintf(L"Digite um número: ");
    scanf("%d", &numero);

    if (numero>=0) {
        wprintf(L"Número positivo");
    }
    else {
        wprintf(L"Número negativo");
    }
    
    return 0;
}