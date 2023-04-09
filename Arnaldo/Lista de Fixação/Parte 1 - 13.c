#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    
    float angulo;

    wprintf(L"Ângulo em graus: ");
    scanf("%f", &angulo);

    if (angulo>360 || angulo<-360) {
        int voltas = angulo/360;
        if (voltas<0) {voltas *= -1;}
        
        wprintf(L"Voltas completadas pelo ângulo: %d\n", voltas);

        angulo = fmod(angulo, 360.0);
    }
    
    if ((angulo>=0 && angulo<90) || (angulo>=-360 && angulo<-270)) {
        printf("Quadrante: 1");
    }
    else if ((angulo>=90 && angulo<180) || (angulo>=-270 && angulo<-180)) {
        printf("Quadrante: 2");
    }
    else if ((angulo>=180 && angulo<270) || (angulo>=-180 && angulo<-90)) {
        printf("Quadrante: 3");
    }
    else if ((angulo>=270 && angulo<=360) || (angulo>=-90 && angulo<0)) {
        printf("Quadrante: 4");
    }
   
    return 0;
}