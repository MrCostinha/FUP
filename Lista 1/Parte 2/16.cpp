#include <iostream>
#include <cwchar>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    int x = rand()%30+1;
    
    wcout << L"Número sorteado: " << x << endl;

    for (int i = 1; i <= x; i++) {
        cout << "*";
    }

    return 0;
}