#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    
    float a, b, c;

    printf("Insira o peso dos 3 objetos: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a>b && a>c) {
        wprintf(L"\nO 1º objeto é o mais pesado");

        if (b<c) {
            wprintf(L"O 2º objeto é o menos pesado\n");
        } else {
            wprintf(L"O 3º objeto é o menos pesado\n");
        }
    } else if (b>a && b>c) {
        wprintf(L"\nO 2º objeto é o mais pesado\n");

        if (a<c) {
            wprintf(L"O 1º objeto é o menos pesado\n");
        } else {
            wprintf(L"O 3º objeto é o menos pesado\n");
        }
    } else {
        wprintf(L"\nO 3º objeto é o mais pesado\n");

        if (a<b) {
            wprintf(L"O 1º objeto é o menos pesado\n");
        } else {
            wprintf(L"O 2º objeto é o menos pesado\n");
        }
    }

    return 0;
}