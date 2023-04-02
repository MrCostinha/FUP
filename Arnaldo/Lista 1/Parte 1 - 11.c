#include <stdio.h>

int main() {
    float salario, aumento;
    int cargo;

    printf("Salário atual: R$ ");
    scanf("%f", &salario);
    printf("Código do cargo: ");
    scanf("%d", &cargo);

    if (cargo==1) {
        aumento = salario*0.4;
        salario += aumento;

        printf("\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==2) {
        aumento = salario*0.25;
        salario += aumento;

        printf("\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==3) {
        aumento = salario*0.1;
        salario += aumento;
        
        printf("\nNovo salário: R$ %.2f", salario);
    }
    else if (cargo==4) {
        aumento = salario*0.005;
        salario += aumento;
        printf("\nNovo salário: R$ %.2f", salario);
    }
    else {
        printf("\nCódigo do cargo inválido!");
    }

    return 0;
}