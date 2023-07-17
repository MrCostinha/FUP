#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float numero, i = 0, soma = 0;

    wprintf(L"Números reais: \n");
    
    while (numero!=0) {
        scanf("%f", &numero);
        if (numero!=0){
            soma += numero;
            i++;
        }
    }

    wprintf(L"Média dos números reais: %.2f", soma/i);

    return 0;
}