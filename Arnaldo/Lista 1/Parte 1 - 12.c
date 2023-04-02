#include <stdio.h>

int main() {
    float preco, acres_decres;
    int vendas;

    printf("Preço atual: R$ ");
    scanf("%f", &preco);
    printf("Vendas: ");
    scanf("%d", &vendas);

    if (vendas<500) {
        acres_decres = preco*(-0.1);
        preco += acres_decres;

        printf("\nNovo preço: R$ %.2f", preco);
    }
    else if (vendas<1200) {
        acres_decres = preco*0.05;
        preco += acres_decres;

        printf("\nNovo preço: R$ %.2f", preco);
    }
    else {
        acres_decres = preco*0.2;
        preco += acres_decres;
        
        printf("\nNovo preço: R$ %.2f", preco);
    }

    return 0;
}