#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if (imc<18.5) {
        wprintf(L"\nÍndice de Massa Corpórea (IMC): %f", imc);
        printf("\nPessoa abaixo do peso");
    }
    else if (imc>=18.5 && imc<25) {
        wprintf(L"\nÍndice de Massa Corpórea (IMC): %f", imc);
        printf("\nPessoa com peso normal");
    }
    else if (imc>=25 && imc<30) {
        wprintf(L"\nÍndice de Massa Corpórea (IMC): %f", imc);
        printf("\nPessoa acima do peso");
    }
    if (imc>30) {
        wprintf(L"\nÍndice de Massa Corpórea (IMC): %f", imc);
        printf("\nPessoa com obesidade");
    }
    
    return 0;
}