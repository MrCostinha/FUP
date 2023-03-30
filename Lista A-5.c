#include <stdio.h>

int main () {
    float a, b, c;

    printf("Insira o peso dos 3 objetos: \n");
    scanf("%f%f%f", &a, &b, &c);

    if (a>b && a>c) {
        printf("O 1º objeto é o mais pesado.\n");

        if (b < c) {
            printf("O 2º objeto é o menos pesado.\n");
        }
        else {
            printf("O 3º objeto é o menos pesado.\n");
        }
    }
    else if (b>a && b>c) {
        printf("O 2º objeto é o mais pesado.\n");

        if (a < c) {
            printf("O 1º objeto é o menos pesado.\n");
        }
        else {
            printf("O 3º objeto é o menos pesado.\n");
        }
    }
    else {
        printf("O 3º objeto é o mais pesado.\n");

        if (a < b) {
            printf("O 1º objeto é o menos pesado.\n");
        }
        else {
            printf("O 2º objeto é o menos pesado.\n");
        }
    }

    return 0;
}