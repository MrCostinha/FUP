#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Valor n: ";
    cin >> n;

    int A[n], B[n], C[n];

    for (int i = 0; i < n; i++) {
        cout << L"A[" << i<< "]: ";
        cin >> A[i];
        cout << "B[" << i<< "]: ";
        cin >> B[i];
        C[i] = A[i] + B[i];
    }

    cout << "Vetor C: ";
    for (int i = 0; i < n; i++) {
        cout << C[i] << " ";
    }

    return 0;
}