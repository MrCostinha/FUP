#include <stdio.h>

int main() {
    int dia_nascimento, mes_nascimento, ano_nascimento, qtd_dias_nascimento, qtd_dias_atual = 728400, idade_anos, idade_meses, idade_dias;

    printf("Insira data de nascimento (dd/mm/aa): \n");
    scanf("%d%d%d", &dia_nascimento, &mes_nascimento, &ano_nascimento);

    qtd_dias_nascimento = ano_nascimento*360 + mes_nascimento*30 + dia_nascimento;
    idade_dias = qtd_dias_atual - qtd_dias_nascimento;
    idade_anos = idade_dias/360;
    idade_meses = (idade_dias%360)/30;
    idade_dias = idade_meses%30;

    printf("Idade = %d anos, %d meses e %d dias", idade_anos, idade_meses, idade_dias);

    return 0;
}