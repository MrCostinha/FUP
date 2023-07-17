#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int i = 1, soma = 0;

    while (i<=100) {
        soma += i;
        i++;
    }
    
    printf("Soma dos naturais de 1 a 100: %d", soma);

    return 0;
}