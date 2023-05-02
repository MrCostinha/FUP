#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");

    int x, maior = INT_MIN, menor = INT_MAX;

    wprintf(L"Números inteiros: \n");
    
    do {
        scanf("%d", &x);
        if (x!=0) {
            if (x>=maior) {
                maior = x;
            }
            if (x<=menor) {
                menor = x;
            }
        }
    } while (x!=0);

    wprintf(L"Maior: %d\nMenor: %d", maior, menor);

    return 0;
}