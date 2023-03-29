#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Insira a 1ª nota: \n");
    scanf("%f", &n1);
    printf("Insira a 2ª nota: \n");
    scanf("%f", &n2);
    printf("Insira a 3ª nota: \n");
    scanf("%f", &n3);
    printf("Insira a 4ª nota: \n");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("A média das notas é: %.2f", media);
    return 0;
}