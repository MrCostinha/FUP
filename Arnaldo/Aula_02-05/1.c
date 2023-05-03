#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int dado_1 = rand()%6+1, dado_2 = rand()%6+1, soma = dado_1+dado_2;

    printf("Primeiro dado: %d\n", dado_1);
    printf("Segundo dado: %d\n", dado_2);
    printf("Soma: %d\n", soma);

    if (soma%2 == 0) {
        printf("\nCamisa verde");
    }
    else {
        printf("\nCamisa amarela");
    }
    if (dado_1 == dado_2) {
        wprintf(L"\nBoné");
    }
    else {
        wprintf(L"\nSem boné");
    }

    return 0;
}