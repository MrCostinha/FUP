#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float salario, aumento;
    int cargo;

    wprintf(L"Salário atual: R$ ");
    scanf("%f", &salario);
    wprintf(L"Código do cargo: ");
    scanf("%d", &cargo);

    if (cargo==1) {
        aumento = salario*0.4;
        salario += aumento;

        wprintf(L"\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==2) {
        aumento = salario*0.25;
        salario += aumento;

        wprintf(L"\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==3) {
        aumento = salario*0.1;
        salario += aumento;
        
        wprintf(L"\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==4) {
        aumento = salario*0.005;
        salario += aumento;
        wprintf(L"\nNovo salário: R$ %.2f", salario);
    }
    else {
        wprintf(L"\nCódigo do cargo inválido!");
    }

    return 0;
}