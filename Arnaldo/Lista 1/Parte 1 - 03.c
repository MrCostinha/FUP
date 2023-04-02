#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int  p1, p2, p3;

    printf("Insira a 1ª nota e seu peso: \n");
    scanf("%f%d", &n1, &p1);
    printf("Insira a 2ª nota e seu peso: \n");
    scanf("%f%d", &n2, &p2);
    printf("Insira a 3ª nota e seu peso: \n");
    scanf("%f%d", &n3, &p3);

    media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    printf("A média ponderada das notas é: %.2f", media);
    return 0;
}