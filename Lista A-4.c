#include <stdio.h>

int main() {
    int num1, num2, diferenca;

    printf("Insira dois números: \n");
    scanf("%d%d", &num1, &num2);

    diferenca = num1-num2;

    if (diferenca >= 0) {
        return diferenca;
    }
    else {
        diferenca = diferenca * (-1);
    }

    printf("Valor absoluto da diferença entre os números: %d", diferenca);

    return 0;
}