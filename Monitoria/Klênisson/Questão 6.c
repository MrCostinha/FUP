#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int x, soma;

    wprintf(L"Número inteiro de 3 dígitos (000): ");
    scanf("%d", &x);

    soma = x%10;
    x /= 10;
    soma += x%10;
    x /= 10;
    soma += x%1000;

    printf("Soma dos algarismos: %d", soma);

    return 0;
}