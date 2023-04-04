#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#define pi 3.14

int main() {
    setlocale(LC_ALL, "");
    
    float raio, area;

    wprintf(L"Raio do círculo (m): ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    wprintf(L"Área do círculo: %.4fm²", area);
    return 0;
}