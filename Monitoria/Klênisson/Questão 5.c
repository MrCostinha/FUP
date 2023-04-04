#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float salario, aumento;

    wprintf(L"Salário atual: R$ ");
    scanf("%f", &salario);

    aumento = salario * 0.25;
    salario += aumento;

    wprintf(L"Novo salário: R$ %.2f", salario);

    return 0;
}