#include <iostream>
#include <clocale>
#include <cwchar>
#include <cmath>

using namespace std;

void adiciona_ao_endereco(int qtd_par, int* endereco1, int* endereco2) {
    int digitos = 0, aux = qtd_par, divisor;

    while (aux != 0) {
        aux /= 10;
        digitos++;
    }

    divisor = pow(10, digitos/2);

    *endereco1 = qtd_par/divisor;
    *endereco2 = qtd_par%divisor;
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int x;
    int* ptr1 = new int;
    int* ptr2 = new int;

    wcout << L"Número com quantidade par de dígitos: ";
    cin >> x;

    adiciona_ao_endereco(x, ptr1, ptr2);

    wcout << L"Endereço 1: " << *ptr1 << L"\tEndereço 2: " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    return 0;
}