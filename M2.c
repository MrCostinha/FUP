#include <stdio.h>
#define pi 3.14

int main() {
    //Declarar as variáveis
    float raio, area;

    //Ler o valor do raio inserido pelo usuário
    printf("Insira o valor do raio do círculo: ");
    scanf("%f", &raio);

    //Calcular o valor da área do círculo
    area = pi * (raio*raio);

    //Imprimir o resultado da área do círculo
    printf("A área do círculo é: %.4f", area);
    return 0;
}