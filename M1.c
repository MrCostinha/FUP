#include <stdio.h>

int main() {
    //Declarar as variáveis que receberão os valores das notas e média
    float n1, n2, n3, n4, media;

    //Ler as quatro notas
    printf("Insira a 1ª nota: \n");
    scanf("%f", &n1);
    printf("Insira a 2ª nota: \n");
    scanf("%f", &n2);
    printf("Insira a 3ª nota: \n");
    scanf("%f", &n3);
    printf("Insira a 4ª nota: \n");
    scanf("%f", &n4);

    //Calcular a média aritmética das notas
    media = (n1+n2+n3+n4)/4;

    //Imprimir o resultado da média das notas
    printf("A média das notas é: %.2f", media);
    return 0;
}