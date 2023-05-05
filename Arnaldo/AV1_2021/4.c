/*Desenvolva um programa que receba o dia, o mês e o ano de duas pessoas e informe quantos dias
uma delas é mais velha que a outra. Obs: Para facilitar, considere que todos os meses do ano tem 30
dias e todo ano tem 360 dias.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int dia1, mes1, ano1, dia2, mes2, ano2, diferenca;
    wprintf(L"Data de nascimento da 1ª pessoa (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia1, &mes1, &ano1);
    wprintf(L"Data de nascimento da 2ª pessoa (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia2, &mes2, &ano2);

    diferenca = (ano1*360 + mes1*30 + dia1) - (ano2*360 + mes2*30 + dia2);

    if (diferenca>0) {
        wprintf(L"A 1ª pessoa é %d dias mais velha que a 2ª.", diferenca);
    } if (diferenca<0) {
        wprintf(L"A 2ª pessoa é %d dias mais velha que a 1ª.", diferenca*(-1));
    }

    return 0;
}