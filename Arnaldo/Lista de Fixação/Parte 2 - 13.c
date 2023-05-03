#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero, divisores = 0;
    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    for (int i = 2; i <= (numero/2); i++) {
        if(numero%i == 0) {
            divisores++;
        }
    }

    if (divisores == 0) {
        wprintf(L"%d é primo", numero);
    } else {
        wprintf(L"%d não é primo", numero);
    }
    
    return 0;
}