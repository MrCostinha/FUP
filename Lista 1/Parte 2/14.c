#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero;
    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);
    printf("\n%d = ", numero);

    for (int i = 2; i <= numero; i++) {
        while (numero%i == 0) {
            printf("%d", i);
            numero /= i;
            if (numero > 1) printf(" * ");
        }
    }
    
    return 0;
}