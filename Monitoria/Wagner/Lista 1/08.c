#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float nota_1, nota_2, nota_3, media;

    wprintf(L"Insira 3 notas: ");
    scanf("%f%f%f", &nota_1, &nota_2, &nota_3);

    media = (nota_1+nota_2+nota_3) / 3;

    if (media>=7) {
        printf("Aluno Aprovado");
    }
    else if (media<7 && media>=4) {
        printf("Aluno em Prova Final");
    }
    else {
        printf("Aluno Reprovado");
    }

    return 0;
}