#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int Q[20], maior, posicaoMaior;

    for (int i = 0; i < 20; i++) {
        cout << "Insira o " << i + 1 << "º número: ";
        cin >> Q[i];
        if (i == 0) {
            maior = Q[i];
            posicaoMaior = i;
        }
        if (Q[i] < 0) {
            wcout << "Número inválido! Insira novamente." << endl;
            i--;
        } else {
            if (Q[i] > maior) {
                maior = Q[i];
                posicaoMaior = i;
            }
        }
    }

    wcout << L"O maior número é " << maior << L" e está na posição " << posicaoMaior+1 << endl;

    return 0;
}