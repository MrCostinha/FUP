/*Descreva um algoritmo que receba o tempo de uma receita em horas e minutos (Ex.: 1h e 40min) e
depois exiba um menu com as opções: 1 - segundos; 2 - minutos; 3 - horas. O programa deverá
converter o tempo dado para a unidade de medida escolhida (podendo resultar em números com
casas decimais como 1,75 horas, por exemplo).*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float horas, minutos;
    int segundos, opcao;

    printf("Tempo da receita em horas e minutos (24h e 60min): ");
    scanf("%f%f", &horas, &minutos);

    segundos = horas*3600 + minutos*60;
    minutos = segundos*1.0/60.0;
    horas = segundos*1.0/3600.0;

    wprintf(L"Escolha uma opção:\n1 - segundos\t2 - minutos\t3 - horas\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Tempo da receita em segundos: %ds", segundos);
        break;
    case 2:
        wprintf(L"Tempo da receita em minutos: %.2fmin", minutos);
        break;
    case 3:
        wprintf(L"Tempo da receita em horas: %.2fh", horas);
        break;
    default:
        wprintf(L"Opção inválida!\n");
    }

    return 0;
}