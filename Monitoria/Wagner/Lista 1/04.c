#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int numero_natural, numero_invertido;

    wprintf(L"Número natural de 3 dígitos: ");
    scanf("%d", &numero_natural);

    numero_invertido = (numero_natural%10) * 100;
    numero_natural /= 10;
    numero_invertido += (numero_natural%10) * 10;
    numero_natural /= 10;
    numero_invertido += numero_natural%10;

    printf("Número invertido: %.3d", numero_invertido);

    return 0;
}