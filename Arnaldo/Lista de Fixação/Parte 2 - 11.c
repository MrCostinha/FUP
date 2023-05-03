#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int numero_original, numero, inverso = 0, count = 0;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero_original);
    numero = numero_original;

    while (numero > 0) {
        inverso = inverso*10 + (numero%10);
        numero /= 10;
        count++;
    }
    
    printf("Algarismos: %d\n", count);
    wprintf(L"Número invertido: %d", inverso);

    if (numero_original == inverso){
        wprintf(L"\n%d é palíndromo", numero_original);
    }
    else {
        wprintf(L"\n%d não é palíndromo", numero_original);
    }
    
    return 0;
}