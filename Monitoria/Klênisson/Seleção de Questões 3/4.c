#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero, soma, subtracao, multiplicacao;
    float divisao;
    wprintf(L"Número inteiro: ");
    scanf("%d", &numero);
    wprintf(L"\nTabuada do %d\n", numero);

    for (int i = 0; i<=10; i++) {
        soma = numero+i;
        printf("\n\t%d + %d = %d\n", numero, i, soma);
        subtracao = numero-i;
        printf("\t%d - %d = %d\n", numero, i, subtracao);
        multiplicacao = numero*i;
        printf("\t%d * %d = %d\n", numero, i, multiplicacao);
        divisao = (numero*1.0)/(i*1.0);
        printf("\t%d / %d = %.2f\n", numero, i, divisao);
    }

    return 0;
}