#include <stdio.h>

int main() {
    int menu, horas, minutos;
    float horas_convertidas, minutos_convertidos, segundos;

    printf("Insira o tempo da receita em horas e minutos (00h 00m): ");
    scanf("%d%d", &horas, &minutos);

    segundos = horas*3600 + minutos*60;
    minutos_convertidos = segundos/60;
    horas_convertidas = segundos/3600;

    printf("\nConversão para: \n--> 1 - segundos\n--> 2 - minutos\n--> 3 - horas\n");
    scanf("%d", &menu);

    if (menu==1) {
        printf("Tempo da receita em segundos: %d", segundos);
    }
    else if (menu==2) {
        printf("Tempo da receita em minutos: %.2f", minutos_convertidos);
    }
    else if (menu==3) {
        printf("Tempo da receita em horas: %.2f", horas_convertidas);
    }
    else {
        printf("Opção inválida!");
    }

    return 0;
}