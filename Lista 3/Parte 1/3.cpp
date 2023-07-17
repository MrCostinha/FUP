#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

void zera_libera(int *endereco) {
    *endereco = 0;
    delete endereco;

    wcout << L"Endereço zerado e memória liberada." << endl;
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int* ptr = new int;

    cout << "Insira um inteiro: ";
    cin >> *ptr;

    zera_libera(ptr);

    return 0;
}