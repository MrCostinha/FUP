#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int dado1[6] = {0};

    for (int i = 1; i <= 100; i++) {
        int lado = rand()%6;
        dado1[lado]++;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Lado " << i+1 << ": " << dado1[i] << endl;
    }

    return 0;
}