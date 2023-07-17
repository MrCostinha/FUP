#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    
    float salario, aumento;
    int cargo;

    wprintf(L"Salário atual: R$ ");
    scanf("%f", &salario);
    wprintf(L"Código do cargo: ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            aumento = salario*0.4;
            salario += aumento;
            wprintf(L"\nNovo salário: R$ %.2f", salario);
            break;
        case 2:
            aumento = salario*0.25;
            salario += aumento;
            wprintf(L"\nNovo salário: R$ %.2f", salario);
            break;
        case 3:
            aumento = salario*0.1;
            salario += aumento;
            wprintf(L"\nNovo salário: R$ %.2f", salario);
            break;
        case 4:
            aumento = salario*0.005;
            salario += aumento;
            wprintf(L"\nNovo salário: R$ %.2f", salario);
            break;
        default:
            wprintf(L"\nCódigo do cargo inválido!");
    }

    return 0;
}