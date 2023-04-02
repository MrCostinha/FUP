#include <stdio.h>

int main() {
    int menu, horas, minutos;
    float horas_convertidas, minutos_convertidos, segundos;

    printf("Tempo da receita em horas e minutos (00h 00m): ");
    scanf("%d%d", &horas, &minutos);

    segundos = horas*3600 + minutos*60;
    minutos_convertidos = segundos/60;
    horas_convertidas = segundos/3600;

    printf("\nConversão para: \n\t1 - segundos\n\t2 - minutos\n\t3 - horas\n");
    scanf("%d", &menu);

    if (menu==1) {
        printf("\nTempo da receita em segundos: %d", segundos);
    }
    else if (menu==2) {
        printf("\nTempo da receita em minutos: %.2f", minutos_convertidos);
    }
    else if (menu==3) {
        printf("\nTempo da receita em horas: %.2f", horas_convertidas);
    }
    else {
        printf("\nOpção inválida!");
    }

    return 0;
}