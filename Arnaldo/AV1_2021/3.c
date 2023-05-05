/*Faça um programa que, dados dois números inteiros positivos (x e n), imprima os n números primos
a partir de x. Ex.: Para x = 14 e n = 3, deverão ser impressos os número 17, 19 e 23. Para x = 53 e n=5,
deverão ser impressos 53,59,61,67,71.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int x, n, divisores = 0, i = 0;

    wprintf(L"Digite um número inteiro inicial: ");
    scanf("%d", &x);
    wprintf(L"Quantos primos a partir dele? ");
    scanf("%d", &n);

    do {
        for (int j = 2; j <= (x/2); j++) {
            if (x%j == 0) {
                divisores++;
            }
        }
        if (divisores == 0) {
            printf("\n%d", x);
            i++;
        }
        x++;
        divisores = 0;
    } while (i<n);
    
    return 0;
}