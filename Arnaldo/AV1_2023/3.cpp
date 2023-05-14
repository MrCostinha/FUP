#include <iostream>

using namespace std;

int main() {
    int x, soma = 0;

    cin >> x;

    while (x != 0) {
        if ((x%10)%2 == 0) {
            soma += x%10;
        }
        x /= 10;
    }
    
    cout << soma;

    return 0;
}