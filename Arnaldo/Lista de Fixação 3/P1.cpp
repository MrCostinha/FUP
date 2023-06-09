#include <iostream>
#include <wchar.h>  // Caracteres
#include <locale.h> // em pt-br

using namespace std;

void trocaEndereco(int* endereco1, int* endereco2) {
    int aux = *endereco1;

    *endereco1 = *endereco2;
    *endereco2 = aux;
}

int main() {
    setlocale(LC_ALL, "");

    int numero1, numero2;

    int* ptr1 = &numero1;
    int* ptr2 = &numero2;

    cout << "Insira 2 inteiros: ";
    cin >> numero1 >> numero2;

    wcout << L"Valores iniciais: " << *ptr1 << ", " << *ptr2 << endl;

    trocaEndereco(ptr1, ptr2);

    wcout << L"Valores após a troca: " << *ptr1 << ", " << *ptr2 << endl;

    return 0;
}