#include <iostream>

using namespace std;

int main() {
    int vetor[20];

    cout << "Números do vetor: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
    }

    cout << "Ordem inversa: ";
    for (int i = 19; i >= 0; i--) {
        cout << vetor[i] << " ";
    }

    return 0;
}