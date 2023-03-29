#include <stdio.h>

int main() {
  float salario, novo_salario, aumento;

  printf("Insira o valor do salário atual: R$ ");
  scanf("%f", &salario);

  aumento = salario * 0.25;
  novo_salario = salario + aumento;

  printf("O valor do novo salário é: R$ %.2f", novo_salario);
  return 0;
}