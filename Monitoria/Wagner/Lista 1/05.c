#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#define pi 3.1415926536

int main() {
    setlocale(LC_ALL, "");
    
    float voltas_roda, raio_roda, perimetro_roda, distancia;

    wprintf(L"Número de voltas dado pela roda: ");
    scanf("%f", &voltas_roda);
    wprintf(L"Raío da roda (cm): ");
    scanf("%f", &raio_roda);

    perimetro_roda = 2*pi*raio_roda;
    distancia = perimetro_roda*voltas_roda;

    wprintf(L"\nDistância percorrida: %.3fm", distancia/100);
    
    return 0;
}