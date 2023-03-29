#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Primeiro, insira o tempo da receita em horas: ");
    scanf("%d", &horas);
    printf("Agora, o tempo restante em minutos: ");
    scanf("%d", &minutos);

    segundos = horas*36000 + minutos*60;
    printf("O tempo da receita em segundos é: %ds", segundos);
    return 0;
}