#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    double numero;

    wprintf(L"Número real: ");
    scanf("%lf", &numero);

    if (numero>=0) {
        numero = sqrt(numero);

        wprintf(L"\nRaiz quadrada do número: %lf", numero);
    }
    else {
        numero = pow(numero, 2);

        wprintf(L"\nQuadrado do número: %lf", numero);
    }

    return 0;
}