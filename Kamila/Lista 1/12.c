#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float valor_hora, horas_mes;

    printf("Valor ganho por hora: R$ ");
    scanf("%f", &valor_hora);
    wprintf(L"Horas trabalhadas no mês: ");
    scanf("%f", &horas_mes);

    wprintf(L"\nSalário do mês: %.2f", valor_hora*horas_mes);

    return 0;
}