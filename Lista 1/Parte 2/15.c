#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int numero_1, numero_2, mdc, mmc;

    wprintf(L"Digite dois números inteiros: ");
    scanf("%d%d", &numero_1, &numero_2);

    for (int i = 1; i <= numero_1 && i <= numero_2; i++) {
        if (numero_1 % i == 0 && numero_2 % i == 0) {
            mdc = i;
        }
    }

    mmc = (numero_1*numero_2)/mdc;

    printf("MMC(%d, %d) = %d", numero_1, numero_2, mmc);

    return 0;
}