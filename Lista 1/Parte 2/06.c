#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int x, maior, menor, count = 0;

    wprintf(L"Números inteiros: \n");
    
    do {
        count++;
        scanf("%d", &x);
        if (count == 1) {
            maior = x;
            menor = x;
        }
        if (x == 0) {
            break;
        }
        if (x >= maior) {
            maior = x;
        } else if (x <= menor) {
            menor = x;
        }
    } while (x != 0);

    wprintf(L"Maior: %d\nMenor: %d", maior, menor);

    return 0;
}