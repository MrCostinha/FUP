#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    float numero, i = 0, soma = 0;

    wprintf(L"Números reais: \n");
    
    while (numero != 0) {
        scanf("%f", &numero);
        if (numero!=0){
            soma += numero;
            i++;
        }
    }

    wprintf(L"Média dos números reais: %.2f", soma/i);

    return 0;
}