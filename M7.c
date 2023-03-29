#include <stdio.h>

int main(){
    float C, F;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C * (9/5) + 32;

    printf("A temperatura convertida em Fahrenheit é: %.1f", F);

    return 0;
}