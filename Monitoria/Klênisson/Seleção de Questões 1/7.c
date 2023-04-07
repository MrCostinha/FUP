#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float C, F;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C * (9/5) + 32;

    printf("Temperatura em Fahrenheit: %.1f", F);

    return 0;
}