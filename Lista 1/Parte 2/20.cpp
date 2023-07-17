#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int numero, caras = 0, coroas = 0;

    for (int i = 1; i <= 100; i++) {
        numero = rand()%2;
        if (numero == 0) {
            caras++;
        } else {
            coroas++;
        }
    }

    cout << caras << " caras e " << coroas << " coroas";

    return 0;
}