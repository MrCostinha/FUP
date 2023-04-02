#include <stdio.h>

int main() {
    float salario, aumento;

    printf("Salário atual: R$ ");
    scanf("%f", &salario);

    aumento = salario * 0.25;
    salario += aumento;

    printf("Novo salário: R$ %.2f", salario);

    return 0;
}