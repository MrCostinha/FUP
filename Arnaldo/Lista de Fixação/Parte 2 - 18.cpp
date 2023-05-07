#include <iostream>
#include <cwchar>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int qtd_numeros;
    
    wcout << L"Quantidade de números da cartela: ";
    cin >> qtd_numeros;

    int cartela[qtd_numeros];

    for (int i = 0; i < qtd_numeros; i++) {
        bool repetido;

        do {
            repetido = false;
            cartela[i] = rand()%51;

            for (int j = 0; j < i; j++) {
                if (cartela[i] == cartela[j]) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);
    }

    for (int j = 0; j < qtd_numeros; j++) {
        cout << cartela[j] << " ";
    }

    return 0;
}