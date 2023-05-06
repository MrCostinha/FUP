/*O código abaixo visa fazer um jogo de adivinhação, onde o usuário deve adivinhar qual letra
maiúscula foi sorteada pelo computador, mas não funciona como deveria. Indique onde está o erro e
como consertá-lo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char x, resp;
    x = rand()%26+'A';
    printf("Sorteei uma letra maiuscula. Qual o seu palpite?\n");
    scanf("%c", &resp);
    while (resp != x) {
        printf("\nErrou. Outro palpite?\n");
        scanf("%c", &resp);
    }
    printf("Acertou!! Ate a proxima!");
    return 0;
}