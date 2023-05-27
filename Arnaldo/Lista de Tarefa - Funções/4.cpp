/*4. Desenvolva uma função que receba 2 números inteiros a e b e imprima na tela todos os números
primos de a até b. Considere a < b.*/
#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

bool ehPrimo(int x){
    int divisores = 0;
    
    for (int i = 2; i <= x/2; i++) {
        if (x%i == 0) {
            divisores++;
        }
    }
    if (divisores != 0 || x < 2) {
        return false;
    } else {
        return true;
    }
}

int main() {
    setlocale(LC_ALL, "");

    int a, b, aux;

    wcout << L"Insira dois números inteiros: ";
    cin >> a >> b;

    if (b < a) {
        aux = a;
        a = b;
        b = aux;
    }

    wcout << L"Números primos de " << a << " a " << b << ": ";
    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }

    return 0;
}