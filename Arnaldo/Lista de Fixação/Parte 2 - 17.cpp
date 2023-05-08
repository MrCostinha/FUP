#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int numero[5];

    for (int i = 0; i < 5; i++) {
        numero[i] = rand()%51;
        for (int j = 0; j < i; j++) {
            if (numero[i] == numero[j]) {
                i--;
                break;
            }
        }
    }

    /*numero1 = rand()%51;
    do {
        numero2 = rand()%51;
    } while (numero2 == numero1);
    do {
        numero3 = rand()%51;
    } while (numero3 == numero1 || numero3 == numero2);
    do {
        numero4 = rand()%51;
    } while (numero4 == numero1 || numero4 == numero2 || numero4 == numero3);
    do {
        numero5 = rand()%51;
    } while (numero5 == numero1 || numero5 == numero2 || numero5 == numero3 || numero5 == numero4);*/

    wcout << L"Cartela de Bingo:" << endl;
    
    for (int k = 0; k < 5; k++) {
        cout << numero[k] << " ";
    }

    return 0;
}