#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    wprintf(L"Insira um número inteiro: ");
    scanf("%d", &N);
    wprintf(L"\nÍmpares de 1 a %d: \n", N);

    for (int i = 1; i <= N; i++){
        if (i%2 != 0) {
            wprintf(L"%d\n", i);
        }
    }
    
    return 0;
}