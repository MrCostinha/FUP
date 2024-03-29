/*5. Desenvolva uma função que receba um número inteiro qualquer e retorne a soma dos seus algarismos.*/
#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

int somaAlgarismos(int x) {
    int soma = 0;
    while (x != 0) {
        soma += x%10;
        x /= 10;
    }
    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int numero;

    wcout << L"Número inteiro: ";
    cin >> numero;

    cout << "Soma dos algarismos: " << somaAlgarismos(numero);

    return 0;
}