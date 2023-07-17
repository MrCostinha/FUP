#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

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