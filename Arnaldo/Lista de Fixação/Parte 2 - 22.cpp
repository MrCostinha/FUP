#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int dado1[6] = {0}, dado2[6] = {0}, mesmo_lado = 0;

    for (int i = 1; i <= 100; i++) {
        int lado_d1 = rand()%6;
        int lado_d2 = rand()%6;

        if (lado_d1==lado_d2) {
            mesmo_lado++;
        }

        dado1[lado_d1]++;
        dado2[lado_d2]++;
    }

    cout << "    Dado 1 | Dado 2" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Lado " << i+1 << ": " << dado1[i] << " | " << dado2[i] << endl;
    }

    cout << "Vezes que cairam lados iguais: " << mesmo_lado;

    return 0;
}