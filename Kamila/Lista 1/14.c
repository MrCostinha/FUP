#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float peso, excesso, multa;

    printf("Peso total dos peixes (kg): ");
    scanf("%f", &peso);

    if (peso>50) {
        excesso = peso-50;
        multa = excesso*4;

        printf("Peso excedente: %.2f kg\nValor da multa: R$ %.2f", excesso, multa);
    }
    else {
        printf("Sem peso excedente");
    }
    
    return 0;
}