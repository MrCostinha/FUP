/*Desenvolva um programa que receba um número inteiro positivo e indique qual a soma de seus
algarismos. Ex.: para o número 2738, a soma de seus algarismos é 20.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero, soma = 0;

    wprintf(L"Digite um número natural: ");
    scanf("%d", &numero);

    while (numero > 0) {
        soma += numero%10;
        numero /= 10;
    }

    wprintf(L"Soma dos algarismos: %d", soma);

    return 0;
}