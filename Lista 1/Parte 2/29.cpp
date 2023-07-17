#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int n, meio, aux;

    wcout << L"Digite um número: ";
    cin >> n;
    meio = (n/2) + 1;
    aux = meio;

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= n; coluna++) {
            if (coluna >= aux && coluna <= n-aux + 1) {
                    cout << "* ";
            } else {
                cout << "  ";
            }
        }
        if (linha < meio) {
            aux--;
        } else {
            aux++;
        }
        cout << endl;
    }

    return 0;
}