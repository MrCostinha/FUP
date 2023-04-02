#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Tempo da receita em horas e minutos (00h 00m): ");
    scanf("%d%d", &horas, &minutos);

    segundos = horas*3600 + minutos*60;
    printf("Tempo da receita em segundos: %d", segundos);
    
    return 0;
}