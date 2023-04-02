#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("1ª nota: ");
    scanf("%f", &n1);
    printf("2ª nota: ");
    scanf("%f", &n2);
    printf("3ª nota: ");
    scanf("%f", &n3);
    printf("4ª nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("\nMédia das notas: %.2f", media);
    return 0;
}