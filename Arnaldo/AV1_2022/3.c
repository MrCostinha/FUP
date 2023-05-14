/*Mais uma superstição de Astronildo. Antes de sair para o trabalho, ele sorteia um número no
intervalo de 1000 a 9999 e o separa em dois: um número A formado pelos dois primeiros dígitos e um
número B formado pelos dois últimos dígitos. Caso A seja um número primo ele irá pegar a rua X, e,
caso não seja, pegará a rua Y. Caso B seja primo, ele irá de moto, e, caso não seja, ele irá de bicicleta.
Além disso, se o número sorteado for divisível por A e por B será um sinal para ele usar sua gravata
da sorte. Faça um programa que faça o sorteio e indique como Astronildo irá para o trabalho. Obs.:
para realizar o sorteio no intervalo indicado, você poderá utilizar a instrução rand( )%9000 + 1000.*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int numero = rand()%9000 + 1000, A, B, count_A = 0, count_B = 0;;

    wprintf(L"Número sorteado: %d\n", numero);

    A = numero/100;
    B = numero%100;

    for (int i = 2; i <= A/2; i++) {
        if (A%i == 0) {
            count_A++;
        }
    }
    if (count_A == 0) {
        printf("Rua X ");
    } else {
        printf("Rua Y ");
    }

    for (int i = 2; i <= B/2; i++) {
        if (B%i == 0) {
            count_B++;
        }
    }
    if (count_B == 0) {
        printf("de moto\n");
    } else {
        printf("de bicicleta\n");
    }

    if (numero%A == 0 && numero%B == 0) {
        printf("Usar gravata da sorte\n");
    }

    return 0;
}