#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <vector>

using namespace std;

void organizaVetor(int vetor[], int n) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++) {
            if (vetor[i] > vetor[j + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    int A[6];

    wcout << L"Digite 6 números inteiros: " << endl;
    for (int i = 0; i < 6; i++) {
        cin >> A[i];
    }

    organizaVetor(A, 6);

    wcout << "Ordem crescente: ";
    for (int i = 0; i < 6; i++) {
        wcout << A[i] << " ";
    }

    return 0;
}