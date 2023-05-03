#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int numero, count = 0;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    for (int i = 0; numero > 0; i++) {
        numero /= 10;
        count++;
    }
    
    printf("Algarismos: %d", count);

    return 0;
}