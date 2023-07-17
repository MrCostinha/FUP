#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int numero, inverso = 0, count = 0;

    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        inverso = inverso*10 + (numero%10);
        numero /= 10;
        count++;
    }
    
    printf("Algarismos: %d\n", count);
    wprintf(L"Número invertido: %d", inverso);

    return 0;
}