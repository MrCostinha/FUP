#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int x, maior_1, maior_2, menor_1, menor_2, cont = 0;

    wprintf(L"Números inteiros: \n");
    
    do {
        cont++;
        scanf("%d", &x);
        if (cont==1) {
                maior_1 = x;
                maior_2 = x;
                menor_1 = x;
                menor_2 = x;
        }
        if (x!=0) {
            if (x>maior_1) {
                maior_2 = maior_1;
                maior_1 = x;
            }
            else if (x>maior_2) {
                maior_2 = x; 
            }
            if (x<menor_1) {
                menor_2 = menor_1;
                menor_1 = x;
            }
            else if (x<menor_2) {
                menor_2 = x;
            }
        }
    } while (x!=0);

    wprintf(L"Maior: %d\tSegundo Maior: %d\nMenor: %d\tSegundo Menor: %d", maior_1, maior_2, menor_1, menor_2);

    return 0;
}