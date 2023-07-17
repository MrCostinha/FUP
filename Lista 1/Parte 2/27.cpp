#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int n;

    wcout << L"Digite um número: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}