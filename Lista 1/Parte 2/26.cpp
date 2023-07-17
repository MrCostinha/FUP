#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char inicial, final;

    cout << "Letra inicial: ";
    cin >> inicial;
    cout << "Letra final: ";
    cin >> final;

    for (int i = 0; i < 26; i++) {
        if (inicial == maiusculas[i]) {
            inicial = i;
        }
        if (final == maiusculas[i]) {
            final = i;
        }
    }

    int letra = rand()%(final - inicial + 1) + inicial;

    wcout << L"Letra maiúscula sorteada: " << maiusculas[letra];

    return 0;
}