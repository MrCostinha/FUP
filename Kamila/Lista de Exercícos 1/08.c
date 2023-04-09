#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    printf("Seu quadrado: %d\n", numero*numero);
    printf("Seu triplo: %d\n", numero*3);
    printf("Sua metade: %.2f", numero*1.0 / 2);

    return 0;
}