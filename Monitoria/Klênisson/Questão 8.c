#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media;

    printf("1ª nota e seu peso: ");
    scanf("%f%f", &n1, &p1);
    printf("2ª nota e seu peso: ");
    scanf("%f%f", &n2, &p2);
    printf("3ª nota e seu peso: ");
    scanf("%f%f", &n3, &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf("\nMédia ponderada das notas: %.2f", media);

    return 0;
}