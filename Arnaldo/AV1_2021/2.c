/*Desenvolva um programa que receba um valor inteiro positivo x e apresente qual o maior dos seus
dígitos e qual o menor. Ex.: Para x = 23654, o maior dos dígitos é 6 e o menor é 2.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int x, maior, menor, digito;

    wprintf(L"Digite um número natural: ");
    scanf("%d", &x);
    
    maior = x%10;
    menor = x%10;

    while (x>0) {
        digito = x%10;
        if (digito>maior) {
            maior = digito;
        }
        if (digito<menor) {
            menor = digito;
        }
        x = x/10;
    }

    wprintf(L"O maior dígito é %d e o menor é %d.", maior, menor);
    
    return 0;
}