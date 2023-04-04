#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    float real, dollar;

    printf("Valor em reais: R$ ");
    scanf("%f", &real);

    dollar = real/5.06;

    wprintf(L"Valor convertido em dólar: USD %.2f", dollar);
    return 0;
}