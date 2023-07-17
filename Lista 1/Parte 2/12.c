#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero, divisores = 0;
    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        if(numero%i == 0) {
            divisores++;
        }
    }
    
    printf("Divisores: %d", divisores);

    return 0;
}