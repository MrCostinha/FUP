#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int codigo, calorias;

    printf("Prato: \n\t1 - Vegetariano\n\t2 - Peixe\n\t3 - Frango\n\t4 - Carne\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            calorias = 180;
            break;
        case 2:
            calorias = 230;
            break;
        case 3:
            calorias = 250;
            break;
        case 4:
            calorias = 350;
            break;
        default:
            wprintf(L"\nCódigo inválido!");
    }
    
    printf("\nSobremesa: \n\t1 - Abacaxi\n\t2 - Sorvete diet\n\t3 - Mouse diet\n\t4 - Mouse chocolate\n");
    scanf("%d", &codigo);
    
    switch (codigo) {
    case 1:
        calorias += 75;
        break;
    case 2:
        calorias += 110;
        break;
    case 3:
        calorias += 170;
        break;
    case 4:
        calorias += 200;
        break;
    default:
        wprintf(L"\nCódigo inválido!");
    }
   
    wprintf(L"\nBebida: \n\t1 - Chá\n\t2 - Suco de laranja\n\t3 - Suco de melão\n\t4 - Refrigerante diet\n");
    scanf("%d", &codigo);
    
    switch (codigo) {
        case 1:
            calorias += 20;
            break;
        case 2:
            calorias += 70;
            break;
        case 3:
            calorias += 100;
            break;
        case 4:
            calorias += 65;
            break;
        default:
            wprintf(L"\nCódigo inválido!");
            return 1;
    }
    
    printf("\nTotal de calorias: %d cal", calorias);

    return 0;
}