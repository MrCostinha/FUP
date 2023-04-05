#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero_a, numero_b, numero_c;
    wchar_t marca_a[20], marca_b[20], marca_c[20];

    printf("Marca: ");
    wscanf(L"%ls", marca_a);
    wprintf(L"Número de chuteiras da %ls: ", marca_a);
    scanf("%d", &numero_a);

    printf("\nMarca: ");
    wscanf(L"%ls", marca_b);
    wprintf(L"Número de chuteiras da %ls: ", marca_b);
    scanf("%d", &numero_b);

    printf("\nMarca: ");
    wscanf(L"%s", marca_c);
    wprintf(L"Número de chuteiras da %ls: ", marca_c);
    scanf("%d", &numero_c);

    wprintf(L"\nChuteiras da %ls: %d\n", marca_a, numero_a);
    wprintf(L"Chuteiras da %ls: %d\n", marca_b, numero_b);
    wprintf(L"Chuteiras da %ls: %d", marca_c, numero_c);

    wprintf(L"");

    return 0;
}