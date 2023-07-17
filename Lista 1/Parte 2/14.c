#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

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