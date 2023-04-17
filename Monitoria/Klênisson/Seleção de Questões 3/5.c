#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero, fatorial = 1;
    wprintf(L"Número natural: ");
    scanf("%d", &numero);

    for (int i = numero; i>0; i--) {
        fatorial *= i;
    }

    wprintf(L"%d! = %d", numero, fatorial);

    return 0;
}