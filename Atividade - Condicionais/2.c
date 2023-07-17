#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float altura, peso;
    int sexo;

    printf("Altura (m): ");
    scanf("%f", &altura);
    printf("Sexo: \n\t1 - Masculino\n\t2 - Feminino\n");
    scanf("%d", &sexo);

    switch (sexo) {
        case 1:
            peso = (72.7*altura) - 58;
            printf("Peso ideal: %.2f kg", peso);
            break;
        case 2:
            peso = (62.1*altura) - 44.7;
            printf("Peso ideal: %.2f kg", peso);
            break;
        default:
            wprintf(L"Opção inválida");
            return 1;
    }

    return 0;
}