/* Godofredo é uma pessoa bem supersticiosa. Todo dia ele joga uma moeda n vezes, sendo n sua idade.
Se a quantidade de caras for par ele usa meias rosas, mas se for ímpar ele usa meias azuis. Além
disso, se a quantidade de coroas for um número primo ele usa sandálias ao invés de sapatos. Faça um
programa para automatizar esse processo e dizer o que Godofredo deve usar.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int idade, numero, caras = 0, coroas = 0, primo = 0;

    wprintf(L"Idade: ");
    scanf("%d", &idade);

    for (int i = 1; i <= idade; i++) {
        numero = rand()%2;
        if (numero==0) {
            caras++;
        } else {
            coroas++;
        }
    }

    for (int i = 2; i <= (coroas/2); i++) {
        if (coroas%i==0) {
            primo++;
        }
    }

    if (caras%2==0) {
        printf("\nMeias rosas ");
    } else {
        printf("\nMeias azuis ");
    }

    if (primo==0) {
        wprintf(L"e sandálias.");
    } else {
        printf("e sapatos.");
    }

    return 0;
}