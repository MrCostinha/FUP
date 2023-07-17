#include <iostream>
#include <clocale>
#include <cwchar>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");

    int A[10], B[10], x;
    
    cout << "Valor de x: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        wcout << L"Insira o " << i + 1 << L"º número do vetor A: ";
        cin >> A[i];
        B[i] = A[i]*x;
    }

    cout << "Vetor B: ";
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }

    return 0;
}