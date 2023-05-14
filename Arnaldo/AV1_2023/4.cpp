#include <iostream>

using namespace std;

int main() {
    int x, y, A, B, retas = 0;

    cin >> x >> y;

    do {
        cin >> A >> B;
        if (y != A*x + B) {
            retas++;
        }
    } while (y != A*x + B);

    cout << retas;

    return 0;
}