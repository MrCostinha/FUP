#include <iostream>
#include <clocale>
#include <cwchar>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    srand(time(NULL));

    string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letra = rand()%26;

    wcout << L"Letra maiúscula sorteada: " << maiusculas[letra];

    return 0;
}