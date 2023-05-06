#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int numero, caras = 0, coroas = 0;

    for (int i = 1; i <= 100; i++) {
        numero = rand()%2;
        if (numero==0) {
            caras++;
        }
        else {
            coroas++;
        }
    }

    wprintf(L"\n%d caras e %d coroas", caras, coroas);

    return 0;
}