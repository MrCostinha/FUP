#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    float numero, soma = 0;

    wprintf(L"Números reais: \n");

    do {
        scanf("%f", &numero);
        soma += numero;
    } while (numero != 0);

    wprintf(L"Soma dos números reais: %.2f", soma);

    return 0;
}