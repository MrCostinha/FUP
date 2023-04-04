#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int numero_1, numero_2, numero_3;

    wprintf(L"Insira 3 números: ");
    scanf("%d%d%d", &numero_1, &numero_2, &numero_3);

    if (numero_1>numero_2 && numero_1>numero_3) {
        wprintf(L"\nO número %d é o maior", numero_1);
    }
    else if (numero_2>numero_1 && numero_2>numero_3) {
        wprintf(L"\nO número %d é o maior", numero_2);
    }
    else {
        wprintf(L"\nO número %d é o maior", numero_3);
    }

    return 0;
}