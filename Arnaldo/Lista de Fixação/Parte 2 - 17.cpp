#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int numero1, numero2, numero3, numero4, numero5;

    numero1 = rand()%51;
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
    } while (numero5 == numero1 || numero5 == numero2 || numero5 == numero3 || numero5 == numero4);

    cout << "Cartela de Bingo:" << endl << numero1 << " " << numero2 << " " 
    << numero3 << " " << numero4 << " " << numero5;
    return 0;
}