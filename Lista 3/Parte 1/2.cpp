#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <cstdlib> // Números
#include <ctime>   // Aleatórios
#include <cstdint> // uintptr_t

using namespace std;

void sorteio(int* endereco) {
    srand(time(NULL));

    int x = rand()%50;

    if ((reinterpret_cast<uintptr_t>(endereco) & 1) == 0) { //Verifica se o último bit do endereço é 0 (par)
        while (x%2 != 0) {
            x = rand()%50;
        }
        *endereco = x;
    } else {
        while (x%2 == 0) {
            x = rand()%50;
        }
        *endereco = x;
    }
}

int main() {
    setlocale(LC_ALL, "");

    int* ptr = new int;

    wcout << L"Endereço: " << ptr << endl;

    sorteio(ptr);

    wcout << L"Valor sorteado no endereço: " << *ptr << endl;

    return 0;
}