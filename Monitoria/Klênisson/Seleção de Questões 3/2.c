#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int i = 1, x, soma = 0;

    wprintf(L"Número natural: ");
    scanf("%d", &x);

    while (i<=x) {
        soma += i;
        i++;
    }

    printf("Soma dos naturais de 1 a %d: %d", x, soma);

    return 0;
}