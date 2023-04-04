#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int angulo;

    wprintf(L"Ângulo em graus: ");
    scanf("%d", &angulo);

    if (angulo>360) {
        angulo %= 360;

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
    }
    else if (angulo<-360) {
        angulo %= 360;

        if (angulo>=0 && angulo<=-90) {
            printf("Quadrante: 4");
        }
        else if (angulo>-90 && angulo<=-180) {
            printf("Quadrante: 3");
        }
        else if (angulo>-180 && angulo<=-270) {
            printf("Quadrante: 2");
        }
        else {
            printf("Quadrante: 1");
        }
    }
    
    return 0;
}