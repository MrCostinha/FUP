#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int semana;

    printf("Dia da semana: ");
    scanf("%d", &semana);

    switch (semana) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            wprintf(L"Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            wprintf(L"Sábado");
            break;
        default:
            wprintf(L"Opção inválida");
    }

    return 0;
}