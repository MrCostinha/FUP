/*3. Faça uma função que receba como parâmetro 3 números inteiros e retorne o MMC (Mínimo Múltiplo
Comum) deles.*/
#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

int mdc(int n1, int n2, int n3) {
    for (int i = 1; i <= n1 && i <= n2 && i <= n3; i++) {
        if (n1%i == 0 && n2%i == 0 && n3%i == 0) {
            return i;
        }
    }
    
    return 1;
}
int mmc(int n1, int n2, int n3) {
    return (n1*n2*n3)/mdc(n1, n2, n3);
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int n1, n2, n3;

    wcout << L"Insira 3 números inteiros: ";
    cin >> n1 >> n2 >> n3;

    cout << "MMC = " << mmc(n1, n2, n3);

    return 0;
}