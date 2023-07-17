#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    
    printf("Soma dos naturais de 1 a 100: %d", soma);

    return 0;
}