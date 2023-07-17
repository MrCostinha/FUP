#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    
    int menu, horas, minutos;
    float horas_convertidas, minutos_convertidos, segundos;

    printf("Tempo da receita em horas e minutos (00h 00m): ");
    scanf("%d%d", &horas, &minutos);

    segundos = horas*3600 + minutos*60;
    minutos_convertidos = segundos/60;
    horas_convertidas = segundos/3600;

    wprintf(L"\nConversão para: \n\t1 - segundos\n\t2 - minutos\n\t3 - horas\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("\nTempo da receita em segundos: %d", segundos);
            break;
        case 2:
            printf("\nTempo da receita em minutos: %.2f", minutos_convertidos);
            break;
        case 3:
            printf("\nTempo da receita em horas: %.2f", horas_convertidas);
            break;
        default:
            wprintf(L"\nOpção inválida!");
            return 0;
    }

    return 0;
}