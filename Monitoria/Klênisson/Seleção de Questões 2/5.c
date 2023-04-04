#include <stdio.h>

int main() {
    int nota;

    printf("Nota: ");
    scanf("%d", &nota);

    if (nota>=7) {
        printf("\nAprovado");
    }
    else {
        printf("\nReprovado");
    }

    return 0;
}