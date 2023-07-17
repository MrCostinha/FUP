#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

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