#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int x, soma = 0;

    wprintf(L"Número natural: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        soma += i;
    }

    printf("Soma dos naturais de 1 a %d: %d", x, soma);

    return 0;
}