#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    printf("Antecessor: %d\n", numero-1);
    printf("Sucessor: %d", numero+1);

    return 0;
}