#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int a, b, soma = 0;

    wprintf(L"Insira 2 números naturais: ");
    scanf("%d%d", &a, &b);

    if (a <= b) {
        while (a <= b) {
            soma += a;
            a++;
        }
    } else {
        while (b <= a) {
            soma += b;
            b++;
        }
    }

    printf("Soma dos naturais: %d", soma);

    return 0;
}