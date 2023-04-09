#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float numero, i = 1.0, soma = 0;

    wprintf(L"Números reais: \n");
    
    while (1) {
        scanf("%f", &numero);
        if (numero==0) {
            break;
        }
        soma += numero;
        i++;
    }

    wprintf(L"Média dos números reais: %.2f", soma/(i-1));

    return 0;
}