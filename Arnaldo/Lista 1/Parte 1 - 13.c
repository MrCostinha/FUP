#include <stdio.h>

int main() {
    int angulo;

    printf("Ângulo em graus: ");
    scanf("%d", &angulo);

    if (angulo>360) {
        angulo %= 360;
    }
    else if (angulo<0) {
        angulo %= 360;
        angulo += 360;
    }
    
    if (angulo>=0 && angulo<=90) {
        printf("Quadrante: 1");
    }
    else if (angulo>90 && angulo<=180) {
        printf("Quadrante: 2");
    }
    else if (angulo>180 && angulo<=270) {
        printf("Quadrante: 3");
    }
    else {
        printf("Quadrante: 4");
    }
    
    return 0;
}