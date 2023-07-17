#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    
    int numero, count = 0;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        numero /= 10;
        count++;
    }
    
    printf("Algarismos: %d", count);

    return 0;
}