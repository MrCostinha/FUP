#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x, C=0, B=0, E=0;
    float porcent_C, porcent_B, porcent_E;
    char opcao;

    wprintf(L"Quantidade de bebês: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++){
        wprintf(L"\nOpção\nC - Cubo\tB - Bola\tE - Estrela\t\n");
        scanf(" %c", &opcao);

        if (opcao == 'C' || opcao == 'c') {
            C++;
        }
        else if (opcao == 'B' || opcao == 'b') {
            B++;
        }
        else if (opcao == 'E' || opcao == 'e') {
            E++;
        }
    }

    porcent_C = (C*100)/(x*1.0);
    porcent_B = (B*100)/(x*1.0);
    porcent_E = (E*100)/(x*1.0);

    wprintf(L"\nBebês que escolheram Cubo: %.2f%%\n", porcent_C);
    wprintf(L"Bebês que escolheram Bola: %.2f%%\n", porcent_B);
    wprintf(L"Bebês que escolheram Estrela: %.2f%%\n", porcent_E);

    return 0;
}