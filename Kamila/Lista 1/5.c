#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int quantidade;
    float preco;

    wprintf(L"\tLojinha do R& 1,99\t\nQuantidade de produtos: ");
    scanf("%d", &quantidade);

    preco *= quantidade;

    wprintf(L"Preço total: R$ %.2lf", preco);

    return 0;
}