#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int n, meio, aux, count = 0;

    wcout << L"Digite um número: ";
    cin >> n;
    meio = (n/2) + 1;
    aux = meio;

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= n; coluna++) {
            if (coluna == meio) {
                cout << "* ";
            }
            if (coluna < meio) {
                if (coluna >= aux) {
                    cout << "* ";
                    count++;
                } else {
                    cout << "  ";
                }
            } else if (coluna > meio) {
                if (count > 0) {
                    cout << "* ";
                    count--;
                }
            }
        }
        if (linha < meio) {
            aux--;
        } else {
            aux++;
        }
        cout << endl;
        count = 0;
    }

    return 0;
}