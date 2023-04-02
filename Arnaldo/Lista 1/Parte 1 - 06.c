#include <stdio.h>

int main() {
    int dia, mes, ano, qtd_dias, idade;

    printf("Data de nascimento (dd/mm/aa): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    qtd_dias = ano*360 + mes*30 + dia;
    idade = (2023*360 + 4*30 + 02) - qtd_dias;
    
    idade /= 360;

    printf("Idade em anos = %d", idade);

    return 0;
}