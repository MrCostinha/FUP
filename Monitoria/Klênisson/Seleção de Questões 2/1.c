#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade>=18) {
        printf("\nMaior de idade");
    }
    else {
        printf("\nMenor de idade");
    }

    return 0;
}