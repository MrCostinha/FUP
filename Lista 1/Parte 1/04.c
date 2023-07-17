#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int num1, num2, diferenca;

    wprintf(L"Insira dois números: \n");
    scanf("%d%d", &num1, &num2);

    diferenca = num1-num2;

    if (diferenca<0) {
        diferenca *= -1;
    }

    wprintf(L"Valor absoluto da diferença entre os números: %d", diferenca);

    return 0;
}