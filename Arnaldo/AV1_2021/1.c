/*O código abaixo visa fazer um jogo de dados onde os n jogadores rolam 2 dados de 6 lados e ganha
aquele que tirou a maior soma (em caso de empate, o que jogou primeiro ganha). Ao final do jogo era
para o número do jogador (de 1 até n) ser impresso, mas em alguma parte o jogo não funciona como
deveria. Identifique o que está errado e como podemos consertar o código.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n, p=1, m=0, v;
    scanf("%d", &n);
    while (p<=n) {
        int d1, d2;
        d1 = rand()%6+1;
        d2 = rand()%6+1;
        printf("%d - %d\n", p, d1+d2);
        if (d1+d2>m) {
            v = p;
            m = d1+d2;
        }
        p++;
    }
    printf("O vencedor foi o jogador %d.", v) ;
    return 0;
}