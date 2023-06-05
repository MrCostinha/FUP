#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

void zera_libera(int *endereco) {
    *endereco = 0;
    delete endereco;

    wcout << L"Endereço zerado e memória liberada." << endl;
}

int main() {
    int* ptr = new int;

    cout << "Insira um inteiro: ";
    cin >> *ptr;

    zera_libera(ptr);

    return 0;
}