#include <iostream>

using namespace std;

int main() {
    int n, soma = 1, anterior = 0;

    cin >> n;
    cout << anterior << " " << soma << " ";

    for (int i = 1; i < n, i++) {
        int numero = soma;
        soma += anterior;
        anterior = soma;
    }

    return 0;
}