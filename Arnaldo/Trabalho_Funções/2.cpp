/*2. Escreva uma função que recebe como parâmetro um inteiro positivo ano e devolve 1 se ano for
bissexto, 0 em caso contrário. Um ano é bissexto caso seja divisível por 400 ou caso seja divisível por
4 e não divisível por 100.
*/
#include <iostream>

using namespace std;

int bissexto(int ano) {
    if ((ano%400 == 0 || ano%4 == 0) && ano%100 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int ano;

    cout << "Insira um ano: ";
    cin >> ano;

    if (ano < 0) {
        cout << "\nO ano deve ser positivo!";
    } else {
        cout << endl << bissexto(ano);
    }

    return 0;
}