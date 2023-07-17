#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int x, maior_1, maior_2, menor_1, menor_2, count = 0;

    wprintf(L"Números inteiros: \n");
    
    do {
        count++;
        scanf("%d", &x);
        if (count == 1) {
                maior_1 = x;
                maior_2 = x;
                menor_1 = x;
                menor_2 = x;
        }
        if (x != 0) {
            if (x > maior_1) {
                maior_2 = maior_1;
                maior_1 = x;
            } else if (x > maior_2) {
                maior_2 = x; 
            }
            if (x < menor_1) {
                menor_2 = menor_1;
                menor_1 = x;
            } else if (x < menor_2) {
                menor_2 = x;
            }
        }
    } while (x != 0);

    wprintf(L"Maior: %d\tSegundo Maior: %d\nMenor: %d\tSegundo Menor: %d", maior_1, maior_2, menor_1, menor_2);

    return 0;
}