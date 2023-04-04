#include <stdio.h>

int main() {
    int dia_n, mes_n, ano_n, qtd_dias_n, idade_anos, idade_meses, idade_dias;

    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia_n, &mes_n, &ano_n);

    qtd_dias_n = ano_n*360 + mes_n*30 + dia_n;
    idade_dias = (2023*360 + 4*30 + 02) - qtd_dias_n;

    idade_anos = idade_dias/360;
    idade_dias %= 360;
    idade_meses = idade_dias/30;
    idade_dias %= 30;

    printf("Idade = %d anos, %d meses e %d dias", idade_anos, idade_meses, idade_dias);

    return 0;
}