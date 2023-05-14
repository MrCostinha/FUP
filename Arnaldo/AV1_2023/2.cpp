#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int dia, mes;
    cin >> dia >> mes;

    if (mes%4 == 1) {
        cout << "Tartaruga ";
    } else if (mes%4 == 2) {
        cout << "Girafa ";
    } else if (mes%4 == 3) {
        cout << "Aranha ";
    } else {
        wcout << L"Águia ";
    }

    if (dia >= 1 && dia < 6) {
        wcout << L"de Água";
    } else if (dia >= 6 && dia < 11) {
        cout << "de Fogo";
    } else if (dia >= 11 && dia < 16) {
        cout << "de Terra";
    } else if (dia >= 16 && dia < 21) {
        cout << "de Ar";
    } else if (dia >= 21 && dia < 26) {
        cout << "de Eletricidade";
    } else {
        cout << "de Metal";
    }

    return 0;
}