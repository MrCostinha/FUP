#include <stdio.h>

int main() {
    float preco, acres_decres;
    int codigo;

    printf("Preço atual: R$ ");
    scanf("%f", &preco);
    printf("\nDigite: 1 --> Aumentar o preço\n\t2 --> Diminuir o preço\n");
    scanf("%d", &codigo);
    printf("\nPorcentagem do acréscimo ou decréscimo: ");
    scanf("%f", &acres_decres);

    acres_decres /= 100;

    if (codigo==1) {
        acres_decres *= preco;
        preco += acres_decres;

        printf("\nNovo preço: R$ %.2f", preco);
    }
    else if (codigo==2) {
        acres_decres *= preco*(-1);
        preco += acres_decres;

        printf("\nNovo preço: R$ %.2f", preco);
    }
    else {
        printf("\nCódigo inválido!");
    }

    return 0;
}