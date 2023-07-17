#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int n;

    wcout << L"Digite um número: ";
    cin >> n;

    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (linha == 0 || linha == n-1) {
                cout << "* ";
            } else {
                if (coluna == 0 || coluna == n-1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}