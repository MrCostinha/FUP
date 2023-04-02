#include <stdio.h>

int main() {
    int dia_nascimento, mes_nascimento, ano_nascimento, qtd_dias_nascimento, qtd_dias_atual, idade;

    printf("Insira data de nascimento (dd/mm/aa): \n");
    scanf("%d%d%d", &dia_nascimento, &mes_nascimento, &ano_nascimento);

    qtd_dias_atual = 2023*360 + 3*30 + 31;
    qtd_dias_nascimento = ano_nascimento*360 + mes_nascimento*30 + dia_nascimento;
    idade = qtd_dias_atual - qtd_dias_nascimento;
    
    idade = idade/360;

    printf("Idade em anos = %d", idade);

    return 0;
}