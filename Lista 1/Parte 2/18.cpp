#include <iostream>
#include <clocale>
#include <cwchar>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    srand(time(NULL));

    int qtd_numeros;
    
    wcout << L"Quantidade de números da cartela: ";
    cin >> qtd_numeros;

    int cartela[qtd_numeros];

    for (int i = 0; i < qtd_numeros; i++) {
        cartela[i] = rand()%51;

        for (int j = 0; j < i; j++) {
            if (cartela[i] == cartela[j]) {
                i--;
                break;
            }
        }
    }

    wcout << L"Cartela de Bingo: ";

    for (int j = 0; j < qtd_numeros; j++) {
        cout << cartela[j] << " ";
    }

    return 0;
}