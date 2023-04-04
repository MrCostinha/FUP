#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float cateto_1, cateto_2, hipotenusa;

    wprintf(L"Insira os catetos do triângulo: \n");
    scanf("%f%f", &cateto_1, &cateto_2);

    hipotenusa = cateto_1*cateto_1 + cateto_2*cateto_2;

    printf("Quadrado da hipotenusa: %f", hipotenusa);

    return 0;
}