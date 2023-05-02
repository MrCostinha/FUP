#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
    printf("%d\n", rand());
   }

    /*Código*/

    return 0;
}