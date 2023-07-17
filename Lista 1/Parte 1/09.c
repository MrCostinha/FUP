#include <stdio.h>

int main() {
    int notas_200, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;

    printf("Valor em reais: R$ ");
    scanf("%d", &notas_1);

    notas_200 = notas_1/200;

    if (notas_1 < 200) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 200;
    }

    notas_100 = notas_1/100;
    
    if (notas_1 < 100) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 100;
    }

    notas_50 = notas_1/50;
    
    if (notas_1 < 50) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 50;
    }

    notas_20 = notas_1/20;

    if (notas_1 < 20) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 20;
    }

    notas_10 = notas_1/10;
    
    if (notas_1 < 10) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 10;
    }

    notas_5 = notas_1/5;
    
    if (notas_1 < 5) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 5;
    }

    notas_2 = notas_1/2;
    
    if (notas_1 < 2) {
        notas_1 = notas_1;
    }
    else {
        notas_1 %= 2;
    }
    
    printf("\nR$ %d,00:\n   %d notas de R$ 200,00\n   %d notas de R$ 100,00\n   %d notas de R$ 50,00\n   %d notas de R$ 20,00\n   %d notas de R$ 10,00\n   %d notas de R$ 5,00\n   %d notas de R$ 2,00\n   %d notas de R$ 1,00", notas_1, notas_200, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1);

    return 0;
}