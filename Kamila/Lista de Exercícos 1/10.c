#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float raio, area;

    wprintf(L"Raio do círculo (m): ");
    scanf("%f", &raio);

    area = 3.1415 * (raio*raio);

    wprintf(L"Área do círculo: %.4fm²", area);
    
    return 0;
}