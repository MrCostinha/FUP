#include <stdio.h>

int main() {
    int codigo, calorias;

    printf("Prato: \n\t1 - Vegetariano\n\t2 - Peixe\n\t3 - Frango\n\t4 - Carne\n");
    scanf("%d", &codigo);
    
    if (codigo==1) {
        calorias = 180;
    }
    else if (codigo==2) {
        calorias = 230;
    }
    else if (codigo==3) {
        calorias = 250;
    }
    else if (codigo==4) {
        calorias = 350;
    }
    else {
        printf("\nCódigo inválido!");
    }

    printf("\nSobremesa: \n\t1 - Abacaxi\n\t2 - Sorvete diet\n\t3 - Mouse diet\n\t4 - Mouse chocolate\n");
    scanf("%d", &codigo);
    
    if (codigo==1) {
        calorias += 75;
    }
    else if (codigo==2) {
        calorias += 110;
    }
    else if (codigo==3) {
        calorias += 170;
    }
    else if (codigo==4) {
        calorias += 200;
    }
    else {
        printf("\nCódigo inválido!");
    }
   
    printf("\nBebida: \n\t1 - Chá\n\t2 - Suco de laranja\n\t3 - Suco de melão\n\t4 - Refrigerante diet\n");
    scanf("%d", &codigo);
    
    if (codigo==1) {
        calorias += 20;
    }
    else if (codigo==2) {
        calorias += 70;
    }
    else if (codigo==3) {
        calorias += 100;
    }
    else if (codigo==4) {
        calorias += 65;
    }
    else {
        printf("\nCódigo inválido!");
    }

    printf("\nTotal de calorias: %d cal", calorias);

    return 0;
}